def discount(amount):
    if amount >=5000:
        return amount * 0.20
    elif amount >=3000:
        return amount * 0.10
    else :
        return 0    
    
bill_amount = float(input("Enter the bill amount: "))
discount  = discount(bill_amount)

print("Bill Amount : ", bill_amount)
print("Discount : ", discount)
print("Payable Amount : ", bill_amount - discount)