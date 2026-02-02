def authentication(username, password):
    if username == "admin" and password == "123":
        return "Access Granted"
    else:
        return 'Invalid Credentials'

while True:
    username = input("Enter username: ")
    password = input("Enter password: ")
    print(authentication(username, password))

    if username == "admin" and password == "123":
        break
    elif input("Do you want to try again (y/n)? ").lower() != 'y':
        break
    