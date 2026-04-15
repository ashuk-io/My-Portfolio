x = [1,2,3,4,5]
y = [30,35,50,55,65]
n = len(x)
mean_x = sum(x) / n
mean_y = sum(y) / n

num = 0
den = 0
for i in range(n):
    num += (x[i] - mean_x) * (y[i] - mean_y)
    den += (x[i] - mean_x) ** 2
m = num / den
c = mean_y - m * mean_x
print(f"Slope (m): {m}")
print("Intercept(c)",c )
hours = float(input("Enter hours studied: "))
predicted_marks = m * hours + c
print(f"Predicted marks: {predicted_marks}")