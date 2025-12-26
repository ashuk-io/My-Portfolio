from time import time
def timer(func):
    def wrapper(n):
        t1 = time()
        func(n)
        t2 = time()
        print(t2-t1)
    return wrapper
    
@timer
def sum(n):
    sum  = 0
    for i in range(0,n+1):
        sum += i
    return sum
# print(sum(1000000))

print(sum(1000000))

