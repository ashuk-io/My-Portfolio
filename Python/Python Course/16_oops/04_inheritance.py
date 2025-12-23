class animal: # Parent class (superclass)
    location = 'India'
    def __init__(self, name):
        self.name = name
    def speak(self):
        print("Speaking now...")
class dog(animal): # This is how inheritance is done
    def speak(self):
        super().speak() # Using speak function of the parent class
        print('Woof!')

# a = animal('Dog')
# a.speak()

d = dog('Brunno')
d.speak()
# print(d.location)