box = []
for i in range(0,6):
    n = int ( input (f"Enter Number {i+1} : "))
    box.insert(i,n)
box = list(set(box))
print(box)

