class Person:
    def __init__(self,name,age):
        self.name = name
        self.age = age

    def Name(self):
        return self.name
    def Age(self):
        return self.age
    def print_person(self):
        print(f'Name is {self.Name()} and he is {self.Age()} years old')
p = Person('Ashu', 19)

print(p.Name(),p.Age())
p.print_person()


        