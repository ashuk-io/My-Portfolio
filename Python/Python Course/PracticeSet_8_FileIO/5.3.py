import argparse
import os

parser = argparse.ArgumentParser(description="Calculate folder size")
parser.add_argument("folder", type=str, help="Enter the folder name")

args = parser.parse_args()

try:
    total_size = sum(os.path.getsize(os.path.join(dirpath, f)) 
                     for dirpath, _, files in os.walk(args.folder) 
                     for f in files)
    print(f"Total size: {total_size} bytes")
except FileNotFoundError as exc:
    print(exc)

