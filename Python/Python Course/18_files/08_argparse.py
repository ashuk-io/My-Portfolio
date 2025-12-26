import argparse
parser = argparse.ArgumentParser(description='Basic Calculator')

parser.add_argument('num1', type=float, help='Enter 1st Number')
parser.add_argument('num2', type=float, help='Enter 2st Number')
parser.add_argument('operator', choices=['add','sub','mul','div'], help='Operation to perform')

args = parser.parse_args()
print(args)

if args.operator == 'add':
    print(f'Result : {args.num1 + args.num2}')
elif args.operator == 'sub':
    print(f'Result : {args.num1 - args.num2}')
elif args.operator == 'mul':
    print(f'Result : {args.num1 * args.num2}')
elif args.operator == 'div':
    print(f'Result : {args.num1 / args.num2}')
else:
    print('Some error occured')
    

