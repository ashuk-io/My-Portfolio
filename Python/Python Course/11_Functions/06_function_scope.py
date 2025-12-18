def sum(a,b):
    c = a+b
    
    z = 1 # local variable
    return c
z = 7# global variavle 
print(sum(4,9))
print(z)

# print(c) #all the variables within function are viped after the function call so here c remains undeclared

