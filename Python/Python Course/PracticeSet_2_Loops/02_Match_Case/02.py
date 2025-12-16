num1 = float(input("Enter 1st number : "))
num2 = float(input("Enter 2nd number : "))
operator = input("Choose an operator (+ - * /) : ")

match operator:
    case "+":
        print(num1, "+",num2,"=",num1+num2)
    case "-":
        print(num1, "-",num2,"=",num1-num2)
    case "*":
        print(num1, "*",num2,"=",num1*num2)
    case "/":
        print(num1, "/",num2,"=",num1/num2)

print("End of program")