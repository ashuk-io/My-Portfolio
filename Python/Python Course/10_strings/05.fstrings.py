#String formatting
template = 'Dear {}, You are {}, take this {}$ as a bonus'
a = 'John'
a1 = 10000
b = 'Jack'
b1 = 1000
c = 'Marie'
c1 = 500

a2='Awesome'
b2='Excellent'
c2='Good'

s1 = template.format(a,a2,a1)
s2 = template.format(b,b2,b1)
s3 = template.format(c,c2,c1)
print(s1,s2,s3,sep="\n")

print(f'Dear {a}, You are {a2}, take this {a1}$ as a bonus')
print(f'Dear {b}, You are {b2}, take this {a1}$ as a bonus')
print(f'Dear {c}, You are {c2}, take this {c1}$ as a bonus')

print(ord('A')) # prints ASCII value of A
print(chr(65)) # prints the characters of ASCII value 65