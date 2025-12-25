def is_greater_than_9(x):
    if x > 9:
        return True
    else:
        return False

numbers = [1,42,5,2,7,3,9,43,6,23,7]

new = list(filter(lambda x: x>9, numbers))

print(new)

