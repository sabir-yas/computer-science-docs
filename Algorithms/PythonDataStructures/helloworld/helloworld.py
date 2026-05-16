
print("hello world")

x = 21
y = 15
print(x + y)

x, y, z = 1, 2, 3
print(x)

#list 
theList = ["yas", "yaseer", "yessir"]
print(theList)

print('Hello', 'world')

#global variables usage
yas = 19

def myfunc():
    print("his age is", yas)
#cannot do "his age is"+yas, 

myfunc()

def globalfunc():
    global age
    age = 29
    print("his age is", age)

globalfunc()

print(age)

x = 1j #this is a complex data type

y = ["apple", "banana", "cherry"] # this is list

z = ("a", "b", "c") #this is a tuple
z2 = ("b", "c", "d") 
print(z+z2)

Range = range(6) #prints 0 to 6, i think we can use this in for loops
print(Range)

#dictionary
x = {
    "name": "john",
    "age": 36
}
print(x.values)

#a frozen set is an immutable version of a set. once a frozenset
#is created, its elements cannot be added or removed. this makes frozenset object
#hashable, allowing them to be used as keys in dictionaries or as elements of other sets

myFrozenSet = frozenset([1,2,3,4,5])

my_dict = {myFrozenSet:"value"}
print(my_dict[myFrozenSet])