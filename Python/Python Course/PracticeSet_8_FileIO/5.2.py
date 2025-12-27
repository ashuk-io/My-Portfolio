import os
from glob import glob
# for file in glob('*.tmp'):
#     os.remove(file)
for file in os.listdir():
    if file.endswith('.tmp') :
        os.remove(file)
