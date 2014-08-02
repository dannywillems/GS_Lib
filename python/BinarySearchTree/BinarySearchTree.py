from BinaryTree import BinaryTree, Node

class BinarySearchTree(BinaryTree):
    def __init__(self, root = None):
        self.root = root

    #------------
    def __insert(self, n, x):
        if n == None:
            return Node(x)
        else:
            if n.data < x:
                n.right = self.__insert(n.right, x)
            elif n.data > x:
                n.left = self.__insert(n.left, x)
        return n
        
    def insert(self, x):
        self.root = self.__insert(self.root, x)
    
    #-------------
    def __lookup(self, n, x):
        if n == None:
            return False
        else:
            if n.data == x:
                return True
            elif n.data < x:
                return self.__lookup(n.right, x)
            elif n.data > x:
                return self.__lookup(n.left, x)
               
    def lookup(self, x):
        return self.__lookup(self.root, x)
    
    #-------------
    def __inorder(self, n):
        if n:
            self.__inorder(n.left)
            print n.data
            self.__inorder(n.right)
            
    def inorder(self):
        self.__inorder(self.root)
        
    #------------
    def __findMin(self, n):
        if n == None:
            return None
        elif n.left == None:
            return n.data
        else:
            return self.__findMin(n.left)
            
    def findMin(self):
        return self.__findMin(self.root)
    
    #-----------
    def __findMax(self, n):
        if n == None:
            return None
        elif n.right == None:
            return n.data
        else:
            return self.__findMax(n.right)
    
    def findMax(self):
        return self.__findMax(self.root)
