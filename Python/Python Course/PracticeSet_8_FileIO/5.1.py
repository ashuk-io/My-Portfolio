import shutil
with open('notes.txt','r') as f:
    content = f.read()
    content = content.upper()
    with open('copy.txt','w') as w:
        w.write(content)

    

    


