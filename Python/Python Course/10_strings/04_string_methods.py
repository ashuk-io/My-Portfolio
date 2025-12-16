s = ' hello my my my  World ' #strings are immutable
# name[0] = 'R' #error -> cant modify the original value

a = len(s)
print(a)
# print(s.upper(),s)
# print(s.capitalize())
# print(s.lower())
# print(s.title())

# print(s.strip())
# print(s.lstrip())
# print(s.rstrip())

# print(s.find("my")) #index of first occurance 
# print(s.replace("my","your")) #replaces all the occurances 

# string = "Apples, Bananas, Pineapples"
# print(string.split(", ")) #splits (, ) and converts it into a list 
# print(",".join(['Apples', 'Bananas', 'Pineapples']))

text = "Python123"

print(text.isalpha()) # Output: False
print(text.isdigit()) # Output: False
print(text.isalnum()) # Output: True
print(text.isspace()) # Output: False