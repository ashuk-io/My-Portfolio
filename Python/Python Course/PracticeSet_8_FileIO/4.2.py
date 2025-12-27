import argparse

parser = argparse.ArgumentParser(description="Count occurrences of a word in a file")
parser.add_argument("filename", type=str, help="Enter the file name")
parser.add_argument("word", type=str, help="Enter a word to find its number of occurrences")

args = parser.parse_args()

try:
    with open(args.filename, "r", encoding="utf-8") as f:
        text = f.read()
    count = text.count(args.word)
    print(f"Number of occurrences: {count}")
    if count == 0:
        print("Word not found!")
except FileNotFoundError as exc:
    print(exc)

