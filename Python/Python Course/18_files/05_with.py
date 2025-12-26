# f = open('text.txt', 'r')

# content = f.read()
# print(content)
# f.close()
with open('text.txt','r') as f: # context manager
    content = f.read()
    print(content)
    # 'with' automatically closes the file
    

