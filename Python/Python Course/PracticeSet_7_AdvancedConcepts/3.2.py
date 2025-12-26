class MathUtils:
    @staticmethod
    def add(a,b):
        print(a+b)
    
    @classmethod
    def description(cls):
        print("This is a utility class for math operations.")

# e = MathUtils()
# e.add(2,3)
# e.description()

MathUtils.add(3,10)
MathUtils.description()