sentence = "Coding in Python is fun"
count = 0
for i in sentence:
    if i in 'aeiouAEIOU':
        count +=1
print(count)
