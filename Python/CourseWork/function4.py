def fare (distance , category = "General"):
    rate = 2
    fare = distance * rate
    if category == "Senior":
        fare *= 0.7
    elif category == "Student":
        fare *= 0.5
    return fare

print("Fare : ", fare(100, "Senior"))