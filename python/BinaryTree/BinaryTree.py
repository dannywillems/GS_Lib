class Node(object):
    def __init__(self, data = 0, left = None, right = None):
        self.data = data
        self.left = left
        self.right = right
    
class BinaryTree(object):
    def __init__(self, root = None):
        self.root = root

    #------------
    def __size(self, n):
        if n:
            return 1 + self.__size(n.left) + self.__size(n.right)
        else:
            return 0
    
    def size(self):
        return self.__size(self.root)
        
    #-----------    
    def __height(self, n):
        if n:
            return 1+max(self.__height(n.left), self.__height(n.right))
        else:
            return 0

    def height(self):
        return self.__height(self.root)
    
    #-----------
    def __findMax(self, n):
        if n:
            return max(n.data, self.__findMax(n.left), self.__findMax(n.right))
        else:
            return None
    
    def findMax(self):
        return self.__findMax(self.root)
    
    #-----------
    def __findMin(self, n):
        if n:
            return min(n.data, self.__findMin(n.left), self.__findMin(n.right))
        else:
            return None
    
    def findMin(self):
        return self.__findMin(self.root)
