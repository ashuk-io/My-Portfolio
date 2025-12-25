from functools import reduce
numbers = [1,4,5,2,7,3,9]
#         [5,5,2,7,3,9]
#         [10,2,7,3,9]
#         [12,7,3,9]
#         [19,3,9]
#         [22,9]
#         [31]

sum = lambda a,b: a+b
c = reduce(sum,numbers)
print(c)


