class employee:

    def __init__(self,salary, name, bond):
        self.salary = salary # create an instance attribute of name salary and assign it with salary
        self.name = name
        self.bond = bond
        pass

    def get_salary(self):
        return self.salary
    def get_info(self):
        print(f'The name is {self.name}, with salary {self.salary} and signed a bond of {self.bond} years')
        
    
e1 = employee(34000,'Ashu', 5)
print(e1.get_salary())
e1.get_info()

