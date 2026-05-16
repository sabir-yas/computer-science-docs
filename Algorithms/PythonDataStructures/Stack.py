#list based approach to stack
class Stack:
    def __init__(self):
        self.items = []

    def is_empty(self):
       # return len(self.items) == 0
        return not self.items
    
    def push(self, item):
        self.items.append(item)
    
    def pop(self):
        return self.items.pop()
    
    def peek(self):
        return self.items[-1]
    
    def size(self):
        return len(self.items)
    
    def __str__(self): #helps print the stack
        return str(self.items)
    
def reverse_string(my_string):
    reversed_string = ""
    stack = Stack()
    for char in my_string:
        stack.push(char)
    while not stack.is_empty():
        reversed_string += stack.pop()
    return reversed_string

#@classmethod for class method
#@staticmethod for static method use if you don't access a class or instance of the class

    
if __name__ == "__main__": #if this is the main folder, then executed the following 
   # s = Stack()
   # s.push(3)
   # s.push(True)
   # print(s)
   # print(s.is_empty())
    test_string = "gninraeL nIdekniL htiw tol a nraeL"
    result = reverse_string(test_string)
    print(result)

