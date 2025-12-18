# map = lambda num: [x*x for x in num]
num = [1, 2, 3, 4, 5]
# print(map(num))
square = lambda x:x*x
print(list(map(square,num)))

