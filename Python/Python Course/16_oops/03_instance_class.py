class employee:
    company = 'Asus' # This is class attribute
    def __init__(self,salary, name, bond,company):
        self.salary = salary # create an instance attribute of name salary and assign it with salary
        self.name = name
        self.bond = bond
        self.company = company
        pass

    def get_salary(self):
        return self.salary
    def get_info(self):
        print(f'The name is {self.name}, with salary {self.salary} and signed a bond of {self.bond} years')
e1 = employee(24000,'Ashu', 3,'Tesla')
print(e1.company) # will always print instance attribute
print(employee.company)

# Object Introspection
print(dir(e1))