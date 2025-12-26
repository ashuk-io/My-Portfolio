words = ["python", "rocks", "ai"]
lenghts = [n for w in words if (n := len(w) )>= 4]
print(lenghts)
