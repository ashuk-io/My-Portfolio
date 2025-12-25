def marks(**kwargs):
    for item in kwargs.keys():
        print(f'The marks of {item} is {kwargs[item]}')

marks(me=21,he=41,she=54,they=99)

