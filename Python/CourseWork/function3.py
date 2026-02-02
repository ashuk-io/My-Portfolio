def SalarySlip(basic):
    hra = 0.20 * basic
    da = 0.10 * basic
    pf = 0.12 * basic
    net_salary = basic + hra + da
    return hra,da,pf,net_salary

hra,da,pf,netsalary = SalarySlip(50000)

print(f"HRA : {hra}")
print(f"DA : {da}")
print(f"PF : {pf}")
print(f"Net Salary : {netsalary}")