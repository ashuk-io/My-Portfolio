import matplotlib.pyplot as plt

x = [1, 2, 3, 4, 5]
y = [30, 35, 50, 55, 65]

n = len(x)
mean_x = sum(x) / n
mean_y = sum(y) / n

num = 0
for i in range(n):
    num += (x[i] - mean_x) * (y[i] - mean_y)

den = 0
for i in range(n):
    den += (x[i] - mean_x) ** 2

m = num / den
c = mean_y - m * mean_x

print(f"Slope (m): {m}")
print(f"Y-intercept (c): {c}")

hours = float(input("Enter hours studied: "))
predicted_score = m * hours + c
print(f"Predicted score: {predicted_score}")

x_line = [min(x), max(x)]
y_line = [m * value + c for value in x_line]

plt.scatter(x, y, color="blue")
plt.plot(x_line, y_line, color="red")
plt.scatter(hours, predicted_score, color="green")

plt.title("Linear Regression: Study Hours vs Score")
plt.xlabel("Hours Studied")
plt.ylabel("Score")
plt.show()
