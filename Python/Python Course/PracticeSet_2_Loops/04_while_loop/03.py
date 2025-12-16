num = 123
reverse = 0
while num>0:
    digit = num % 10

    reverse = reverse * 10 + digit
    num //= 10
print(f"Reversed number : {reverse}")
# print(int(str(num)[::-1]))  Can also be executed like this using advanced string slicing.

