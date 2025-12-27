import argparse

parser = argparse.ArgumentParser(description="Count lines in a file")
parser.add_argument("filename", type=str, help="Enter the file name")
args = parser.parse_args()

try:
    with open(args.filename, "r") as f:
        count = sum(1 for _ in f)
    print(f"Number of lines: {count}")
except FileNotFoundError as exc:
    print(exc)
 
