class BankAccount:
    def __init__(self,name,balance):
        self.name = name
        self.balance = balance

    def deposit(self,amount):
        self.balance += amount
        print(f"Amount Deposited : {amount}\nCurrent Balance:{self.balance}")

    def withdraw(self,amount):
        if amount > self.balance:
            print("Inssuficient Balance")
        else:
            self.balance -= amount
            print(f"Amount Withdrawn : {self.balance}\nCurrent Balance: {self.balance}")

    def display(self):
        print(f"Account Holder: {self.name}\nBalance: {self.balance}")

a1 = BankAccount('Ajay', 10000)
a2 = BankAccount('Vijay', 5000) 

#perform operations 
a1.display()
a2.display()

a1.deposit(2000)
a1.withdraw(3000)                             