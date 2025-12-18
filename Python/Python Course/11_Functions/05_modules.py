# Two types of modules in python:
# -Built in modules 
# -External Modules 
import math
import os
import mymodule
import requests
print(math.sqrt(9))
print(math.pow(3,2)) 
mymodule.hello()

r = requests.get("https://www.google.com")
print(r.text, end="\n")
