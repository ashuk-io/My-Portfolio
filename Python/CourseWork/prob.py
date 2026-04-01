data = [
    {"Study":"high","Attend":"Good","Result":"Pass"},
    {"Study":"High","Attend":"Poor","Result":"Pass"},
    {"Study":"Low","Attend":"Good","Result":"Fail"},
    {"Study":"Low","Attend":"Poor","Result":"Fail"},
    
]
pass_count = sum(1 for d in data if d["Result"] =="Pass")
fail_count = sum(1 for d in data if d["Result"] =="Fail")
total = len(data)
P_pass = pass_count/total
P_fail = fail_count/total

study = "High"
attend = "Good"
def likelihood(feature,value,result):
    count = sum(1 for d in data if d[feature]==value and d["Result"]==result)
    total_class = sum(1 for d in data if d["Result"]==result)
    return count/total_class
P_high_pass = likelihood("Study",study,"Pass")
P_good_pass = likelihood("Attend",attend,"Pass")
P_high_fail = likelihood("Study",study,"Fail")
P_good_fail = likelihood("Attend",attend,"Fail")
score_pass =  P_pass*P_high_pass*P_good_pass
score_fail =  P_fail*P_high_fail*P_good_fail
if score_pass>score_fail:
    print("Prediction:Pass")
else:
    print("Prediction:Fail")    