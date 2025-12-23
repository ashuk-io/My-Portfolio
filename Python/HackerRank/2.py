n = int ( input ( "Enter a number : "))
if n % 2 != 0:
    print('Wierd')
elif n % 2 == 0 and n>=2 and n<=5:
    print('Not Wierd')
elif n % 2 == 0 and n>=6 and n<=20:
    print('Wierd')
if n % 2 == 0 and n > 20:
    print('Not Wierd')