class GS_SNode():
    def __init__(self, data = 0, next = None):
        self.data = data
        self.next = next

class GS_SList():
    def __init__(self):
        self.head = None
        self.tail = None
        self.size = 0

    def push_back(self, data):
        p = GS_SNode(data)
        if self.tail:
            self.tail.next = p
            self.tail = p
        else:
            self.head = p
            self.tail = p
        self.size += 1
    
    def push_front(self, data):
        self.head = GS_SNode(data, self.head)
        if not self.tail:
            self.tail = self.head
        self.size += 1


    def find_min(self):
        min  = self.head
        tmp = self.head
        while tmp:
            if min.data > tmp.data:
                min = tmp
            tmp = tmp.next
        return min
    
    def find_max(self):
        max  = self.head
        tmp = self.head
        while tmp:
            if max.data > tmp.data:
                max = tmp
            tmp = tmp.next
        return max

    def at(self, nbr):
        if nbr >= self.size:
            return None
        else:
            i = 0
            p = self.head
            while i < nbr:
                p = p.next
                i += 1
            return p

    def size(self):
        return self.size

    def last(self):
        return self.tail

    def reverse(self):
        p = self.head
        previous = None
        tmp = None
        while p:
            tmp = p.next
            p.next = previous
            previous = p
            p = tmp
        
        self.head, self.tail = self.tail, self.head

    def __str__(self):
        s = []
        p = self.head
        while p:
            s.append(str(p.data))
            p = p.next
        s.append("*")
        return " -> ".join(s)
