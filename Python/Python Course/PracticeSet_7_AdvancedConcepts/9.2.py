class Point:
    def __init__(self,x,y):
        self.x = x
        self.y = y

    # def sum(self,p):
    #     return Point((self.x + p.x), (self.y + p.y))

    def __add__(self,p):
        return Point((self.x + p.x), (self.y + p.y))
    
    def print_point(self):
        print(f'X is {self.x}, Y is {self.y}')
    
a = Point(3,2)
b = Point(7,9)
# p = a.sum(b)
p = a + b
p.print_point()



    
