def add(a,b, plus=0):
    sum = (a+b+plus)/3
    return sum

c = add(1,5,2)#2 overwrites the the default value(plus = 0)
print(c)


c1 = add(b = 5 , a = 2 ,)
print(c1)

