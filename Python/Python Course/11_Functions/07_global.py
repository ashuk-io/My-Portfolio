def sum(a,b):
    print("I m summing")
    c = a + b
    global z # Please modify it to global z variable 
    z = 1 # this refers to global variable not a local within a function
    return c
z = 3
print(z)
print(sum(3,15))
print(z)
