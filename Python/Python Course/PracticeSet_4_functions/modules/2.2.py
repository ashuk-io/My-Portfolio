def calculate_area(length, width=10):
	return length * width


length = int(input("Enter length : "))
print(f"Area : {calculate_area(length, 8)}")
print(f"Area : {calculate_area(length, 5)}")
print(f"Area : {calculate_area(length)}")