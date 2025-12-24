# Decorator is a function that takes a function to create a new function inside its body  then returns that function

def decorator(func):
    def wrapper():
        print('I m going to execute a function')
        func()
        print('I have successfully executed this function')
    return wrapper
 
@decorator
def say_hello():
    print('Hello!')

say_hello()
# f = decorator(say_hello)
# f()


# f() looks somethign like :
# def f():
#     print('I m going to execute a function')
#     func()
#     print('I have successfully executed this function')
