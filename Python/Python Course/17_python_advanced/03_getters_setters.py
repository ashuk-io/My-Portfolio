class employee:
    def __init__(self,name,salary):
        self.name = name
        self.salary = salary

    @property
    def first_name(self):
        f = self.name.split(" ")
        
        return f[0]
    
    @first_name.setter
    def first_name(self,first):
        f = self.name.split(" ")
        new_name = f'{first} {f[1]} '
        self.name = new_name

e = employee('Ashutosh Kumar',9999)


# print(e.first_name())
# e.set_last_name('Boy')
# print(e.name)

print(e.first_name)
e.first_name = 'Boy'
print(e.name)

