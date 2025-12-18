safe_divide = lambda a,b:"Cannot divide by zero" if b == 0 else a/b

print(safe_divide(5,2))