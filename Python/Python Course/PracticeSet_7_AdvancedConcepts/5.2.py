class NegativeNumberError(Exception):
    pass
try:
    a = int ( input ( 'Enter a number : '))
    b = int ( input ( 'Enter a number : '))
    d = a/b
    
    print(d)
except ValueError:
    print('Enter valid TypeCaste!')
except ZeroDivisionError:
    print('Cant divide by zero!')

if a<0 or b < 0:
    raise NegativeNumberError('Cant except a negative number ')