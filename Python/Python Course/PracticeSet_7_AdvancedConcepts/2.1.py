class Employee:
    # _salary = 37000
    def __init__(self,salary):
        self._salary = salary

    @property
    def salary(self):
        return self._salary 
    
    @salary.setter
    def salary(self,value):
        if value < 0:
            print('Salary cant be negative')
        else :
            self._salary = value
    
e = Employee(39000)
e.salary = 1
print(e.salary)