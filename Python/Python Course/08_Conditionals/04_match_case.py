draw = int(input("Draw a number : "))
match draw:
    case 1:
        print("You won $2")
    case 5:
        print("you got a phone")    
    case 9:
        print("You got nothing")
    case _:
        print("Better luck next time")
