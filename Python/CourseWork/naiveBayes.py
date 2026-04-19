data = [
    {"Study": 'High', 'Attend': 'Good', 'Result': 'Pass'},
    {"Study": 'High', 'Attend': 'Poor', 'Result': 'Pass'},
    {"Study": 'Low', 'Attend': 'Good', 'Result': 'Fail'},
    {"Study": 'Low', 'Attend': 'Poor', 'Result': 'Fail'},
]
pass_count = sum(1 for d in data if d['Result'] == 'Pass')
fail_count = sum(1 for d in data if d['Result'] == 'Fail')
total_count = len(data)
p_pass = pass_count / total_count
p_fail = fail_count / total_count
study = 'High'
attend = 'Good'

def likelihood(feature, value, result):
    count = sum(1 for d in data if d[feature] == value and d['Result'] == result)
    total_class = sum(1 for d in data if d['Result'] == result)
    return count / total_class

p_high_pass = likelihood('Study', 'High', 'Pass')
p_good_pass = likelihood('Attend', 'Good', 'Pass')
p_high_fail = likelihood('Study', 'High', 'Fail')
p_good_fail = likelihood('Attend', 'Good', 'Fail')

score_pass = p_pass * p_high_pass * p_good_pass
score_fail = p_fail * p_high_fail * p_good_fail

if score_pass > score_fail:
    print("Predicted Result: Pass")
else:
    print("Predicted Result: Fail")