type nucleotide = A | C | G | T | Gap
type sequence = nucleotide array

let init i    = Array.make i Gap
let length s  = Array.length s
let get s i   = Array.get s i
let set s i x = s.(i) <- x

let of_char c = match c with
  | 'a' | 'A' -> A
  | 't' | 'T' -> T
  | 'g' | 'G' -> G
  | 'c' | 'C' -> C
  | _         -> Gap

let of_str s =
  let a = init (String.length s) in
  let f i c = a.(i) <- of_char c in
  String.iteri f s;
  a

(*$T to_char
 to_char (of_char 'a') = 'a'
 to_char (of_char 'c') = 'c'
 to_char (of_char 'C') = 'c'
 to_char (of_char 'A') = 'a'
*)
let to_char c = match c with
  | A   -> 'a'
  | C   -> 'c'
  | G   -> 'g'
  | T   -> 't'
  | Gap -> '-'

(*$T to_str
 to_str (of_str "acgt") = "acgt"
 to_str (of_str "A-cGt") = "a-cgt"
 to_str (of_str "--Acgt--") = "--acgt--"
*)
let to_str s =
  let n = length s in
  let rec to_str_loc i =
    if i < n then
      (Char.escaped (to_char (get s i))) ^ (to_str_loc (i + 1))
    else ""
  in
  to_str_loc 0

module Alignment =
  struct (*$< Alignment *)
    let default_f x y = match (x, y) with
      | (Gap, x)          -> -2
      | (x, Gap)          -> -2
      | (a, b) when a = b -> 1
      | _                 -> -1

    (*$T &
     Alignment.similarity (of_str "GA-CGGATTAG") (of_str "GATCGGAATAG") = 6
     Alignment.similarity (of_str "CAGCA-CTTGGATTCTCGG") (of_str \
     "---CAGCGTGG--------") = -19
     Alignment.similarity (of_str "CAGCACTTGGATTCTCGG") (of_str \
     "CAGC-----G-T----GG") = -12
    *)
    let similarity ?gap:(gap=(-2)) ?f:(f=default_f) s t =
      let m = length s in
      let n = length t in
      let a = Array.make_matrix (m + 1) (n + 1) 0 in
      for i = 1 to m do
        a.(i).(0) <- i * gap
      done;
      for i = 1 to n do
        a.(0).(i) <- i * gap
      done;
      for i = 1 to m do
        for j = 1 to n do
          let tmp = max
            (a.(i - 1).(j - 1) + (f (get s (i - 1)) (get t (j - 1))))
            (a.(i).(j - 1) + gap)
          in a.(i).(j) <- max (a.(i - 1).(j) + gap) tmp;
        done;
      done;
      a.(m).(n)

    (* TODO *)
    let global ?gap:(gap=(-2)) ?f:(f=default_f)  s t = 42
    (* TODO *)
    let local ?gap:(gap=(-2)) ?f:(f=default_f) s t = 42
    (* TODO *)
    let semi_global ?gap:(gap=(-2)) ?f:(f=default_f) s t = 42
  end (*$>*)
