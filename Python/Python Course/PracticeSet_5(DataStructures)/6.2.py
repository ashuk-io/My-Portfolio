products = {
    "Laptop": 80000,
    "Phone": 60000,
    "Tablet": 35000,
    "Monitor": 15000
}


product, price = max(products.items(), key=lambda item: item[1])
print(f"Most expensive: {product} : {price}")