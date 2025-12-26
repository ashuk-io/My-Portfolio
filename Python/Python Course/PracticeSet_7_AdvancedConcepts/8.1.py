def sum_all(*args):
    total = 0
    for item in args:
        total += item
    return total

    
print(sum_all(2,5,1))