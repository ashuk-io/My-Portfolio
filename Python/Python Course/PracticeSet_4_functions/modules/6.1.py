def increment():
    count = 0
    count += 1
    print(count)
increment()
increment()
increment()
increment() #The incremented value of the local count variable does not persist throughout function calls bcz it is not recognized globally
