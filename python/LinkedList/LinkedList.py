class Node():
    def __init__(self, data = 0, next = None):
        self.data = data
        self.next = next

class LinkedList():
    def __init__(self, head = None):
        self.head = head

    def push_back(self, data):
        if self.head:
            p = self.head
            while p.next:
                p = p.next
            p.next = Node(data)
        else:
            self.head = Node(data)

    def push_front(self, data):
        self.head = Node(data, self.head)
            
    def find_min(self):
        if self.head:
            m  = self.head.data
            p = self.head.next
            while p:
                if p.data < m:
                    m = p.data
                p = p.next
            return m
        return None

    def __str__(self):
        s = []
        p = self.head
        while p:
            s.append(str(p.data))
            p = p.next
        s.append("*")
        return " -> ".join(s)

l = LinkedList(Node(50))
l.push_back(10)
l.push_back(12)
l.push_front(10)
print l
