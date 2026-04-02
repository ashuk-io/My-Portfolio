actual = ['Pass', 'Fail', 'Pass','Pass', 'Fail']
predicted = ['Pass','Fail', 'Fail','Pass', 'Fail']
TP = TN = FP = FN = 0

for i in range(len(actual)):
    if actual[i] == 'Pass' and predicted[i] == 'Pass':
        TP += 1
    elif actual[i] == 'Fail' and predicted[i] == 'Fail':
        TN += 1
    elif actual[i] == 'Fail' and predicted[i] == 'Pass':
        FP += 1
    elif actual[i] == 'Pass' and predicted[i] == 'Fail':
        FN += 1

print("Confusion Matrix: ")
print(f"TP: {TP}, FP: {FP}")
print(f"FN: {FN}, TN: {TN}")