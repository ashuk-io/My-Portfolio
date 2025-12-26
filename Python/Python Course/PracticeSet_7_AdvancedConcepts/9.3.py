import logging

logging.basicConfig(filename='errors.log',)
class InvalidAge(Exception):
    pass
while True:
    try:
        age = input("Enter your age : ")
        if age.lower() == 'quit':
            break
        age = int(age)


        if age<0 or age > 120:
            raise InvalidAge('Age must be between 0 and 120')
        
        print(f'Okay!, You are {age} years old') 

    except ValueError:
        print('Error! Enter a valid number')
        logging.error('Bad Typecaste entered, Age should be a integer')

    except InvalidAge:
        logging.error(f'Entered a invalid age number (age: {age})')
       
