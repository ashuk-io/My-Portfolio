def sum_of_digits(n):
    if n == 0 or n == 1:
        return n
    else:
        return n%10 + sum_of_digits(n//10)
n = 123
print(sum_of_digits(n))