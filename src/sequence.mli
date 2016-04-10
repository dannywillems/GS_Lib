(**
 * Nucleotide and sequence are abstracted in a abstrac type.
 * Implementation must implement how to init, how to get a nucleotide from the
 * sequence, how to get the length and how to set a nucleotide in a certain
 * position.
 *)

type nucleotide
type sequence

val init    : int       -> sequence
val length  : sequence  -> int
val get     : sequence  -> int -> nucleotide
val set     : sequence  -> int -> nucleotide -> unit

val of_char : char -> nucleotide
val of_str  : string -> sequence

val to_char : nucleotide -> char
val to_str  : sequence -> string

module Alignment :
  sig
    val similarity  : ?gap:int            ->
                      ?f:(nucleotide -> nucleotide -> int)  ->
                      sequence            ->
                      sequence            ->
                      int

    val global      : ?gap:int            ->
                      ?f:(nucleotide -> nucleotide -> int)  ->
                      sequence            ->
                      sequence            ->
                      int

    val local       : ?gap:int            ->
                      ?f:(nucleotide -> nucleotide -> int)  ->
                      sequence            ->
                      sequence            ->
                      int

    val semi_global : ?gap:int            ->
                      ?f:(nucleotide -> nucleotide -> int)  ->
                      sequence            ->
                      sequence            ->
                      int

  end
