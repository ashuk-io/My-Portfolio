import requests
r = requests.get('https://api.github.com/users/ashuk-io')
print(r.text)
with open('ashuk-io.text','w') as f:
    f.write(r.text)
