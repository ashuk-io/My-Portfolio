class Animal:
    def sound(self):
        print('Some sound')
    
class Dog(Animal):
    def sound(self):
        print('Bark!')


bark = Dog()
bark.sound()    