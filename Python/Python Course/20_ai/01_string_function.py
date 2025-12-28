# import re

# def clean_string(text):
#     """
#     Takes a string and replaces all spaces and special characters
#     (anything that isn't a letter or number) with dashes.
#     """
#     if not isinstance(text, str):
#         return "Hey, give me a string to work with!"
        
#     # The regex pattern [^a-zA-Z0-9] finds anything that is NOT a letter or number
#     # and replaces it with a dash.
#     cleaned_text = re.sub(r'[^a-zA-Z0-9]', '-', text)
    
#     return cleaned_text

# # Let's test it out!
# if __name__ == "__main__":
#     test_str = "Hello Ashu! How's the coding going? #Python_is_cool"
#     print(f"Original: {test_str}")
#     print(f"Cleaned:  {clean_string(test_str)}")

def clean_string(text):
    """
    Takes a string and replaces all spaces and special characters
    (anything that isn't a letter or number) with dashes.
    
    We are doing this manually (without the 're' module) by checking
    if each character is alphanumeric.
    """
    if not isinstance(text, str):
        return "Hey, give me a string to work with!"
        
    # Check each character: if it's a letter/number, keep it.
    # Otherwise, swap it for a dash.
    result = "".join(char if char.isalnum() else '-' for char in text)
    
    return result

# Let's test it out!
if __name__ == "__main__":
    test_str = "Hello Ashu! How's the coding going? #Python_is_cool"
    print(f"Original: {test_str}")
    print(f"Cleaned:  {clean_string(test_str)}")