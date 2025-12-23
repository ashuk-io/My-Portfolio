# Class : It is a blueprint/template. Eg. Form for an examination that contains Name, age, Electives, parents names etc

# Object : An instance creted from the class(template). The form containing details of Ashu.

class employee:
    company = 'HP'

    def get_salary(self): # self is important here bcz its a way to reference the object of the class
        return 34000
    
e1 = employee() # an object of class employee is created here 
print(e1.get_salary()) # Employee 'e' get salary is called\

e2 = employee()
print(e2.get_salary())
print(e2.company)