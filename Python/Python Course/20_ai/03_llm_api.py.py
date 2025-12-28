from google import genai

# The client gets the API key from the environment variable `GEMINI_API_KEY`.
key = 'AIzaSyCyI7yHxOOE7UTJm7ALOlfdo3RzSGvYFiU'
client = genai.Client(api_key=key)

response = client.models.generate_content(
    model="gemini-2.5-flash", contents=input("Enter Prompt : ")
)#gemini-2.5-flash-lite
print(response.text)

