# while True:
    # try:
    #     a = int (input ("Enter number 1 : "))
    #     b = int (input ("Enter number 2 : "))

    #     print(f'The sum : {a/b}')

    
    # except ZeroDivisionError:
    #     print("Can't divide by 0")
    # except ValueError:
    #     print("Can't perform bad typecasts")
    # except Exception as e:
    #         print("Unknown error occured!",e)

a = int (input ("Enter number 1 : "))
b = int (input ("Enter number 2 : "))




if b == 0:
    raise ValueError("Cant divide by 0")
print(f'Division : {a/b}')
