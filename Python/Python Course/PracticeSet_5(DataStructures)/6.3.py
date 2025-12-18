contacts = {'ashu' : 1234567890,'harry' :9876543211,'lilly' : 6969696969}
student = {"name": "John", "age": 20, "grade": "A"}

contacts.update(student)
print(contacts)
print({**contacts,**student})