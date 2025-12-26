def logger(func):
    def wrapper():
        print("Function is being called")
        func()
    return wrapper()

@logger
def say_hello():
    print("Hello!")

# l = logger(say_hello)
# l()
