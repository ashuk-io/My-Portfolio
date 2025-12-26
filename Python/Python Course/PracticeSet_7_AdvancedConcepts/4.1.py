class Book:
    def __init__(self,title,author):
        self.title = title
        self.author = author


    def __str__(self):
        return f"{self.title} by {self.author}"

    def __len__(self):
        return self.title
    
e = Book("Science Class 10",'NCERT')
f = Book('Calculus and Integrals', 'RD Verma')

print(e)
print(len(str(e)))
print(f)
print(len(str(f)))




