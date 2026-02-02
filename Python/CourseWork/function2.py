
def withdraw(amount,balance):
    if amount > balance:
        return balance, "Insufficient funds"
    else:
        balance -= amount
        return balance, "Withdrawal successful"
while True:   
    balance = 15000.0
    amount = float(input("Enter amount to withdraw: "))

    print("Initial Balance: ", balance)
    print(f"Updated Balance : {withdraw(amount,balance)[0]} Status: {withdraw(amount,balance)[1]}")

    if input("Do you want to continue (y/n)? ").lower() != 'y':
        break

    
