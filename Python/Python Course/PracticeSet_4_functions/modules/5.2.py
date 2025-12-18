import requests
src = "https://api.github.com"
a = requests.get(src)

print(a.json())