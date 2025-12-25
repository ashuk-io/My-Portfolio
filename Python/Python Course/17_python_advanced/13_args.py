def sum(*args):
    
    total = 0
    for item in args:
        total += item 
    return total

print(sum(2,6,7))

# add = lambda *args: 