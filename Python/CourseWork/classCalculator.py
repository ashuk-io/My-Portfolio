class Calculator:
    def __init__(self,n1,n2):
        self.n1=n1
        self.n2=n2
    def addition(self,n1,n2):
        print(f"{n1} + {n2} = {n1+n2}")
    def substraction(self,n1,n2):
        print(f"{n1} - {n2} = {n1-n2}")
    def multiplication(self,n1,n2):
        print(f"{n1} * {n2} = {n1*n2}")
    
    def power(self,n1,n2):
        print(f"{n1} ^2 = {n1**n2}")
    
    def division(self,n1,n2):
        if n2 == 0:
            print("Division by zero is not allowed.")
        else:
            print(f"{n1} / {n2} = {n1/n2}")

n1 = int(input("Enter first number: "))
n2 = int(input("Enter second number: "))
operation = input("Enter operation (+ - * / **) : ")

c1 = Calculator(n1,n2)
if operation == '+':
    c1.addition(n1,n2)
elif operation == '-':
    c1.substraction(n1,n2)
elif operation == '*':
    c1.multiplication(n1,n2)
elif operation == '/':
    c1.division(n1,n2)
elif operation == '**':
    c1.power(n1,n2)




        






