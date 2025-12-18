# def factorial(a):
#     if a == 0 or a == 1:
#         return 1
#     else:
#         return a * factorial(a-1)

factorial = lambda a: 1 if a == 0 or a==1 else a*factorial(a-1)
print(factorial(5))

# def fibonacci(n):
#     if n == 0 or n == 1:
#         return n
#     else: 
#         return fibonacci(n-1) + fibonacci(n-2)

fibonacci = lambda n: n if n == 1 or n == 0 else fibonacci(n-1) + fibonacci(n-2)   
print(fibonacci(6))

list = [2,3,2,4,6,7,4,9]

