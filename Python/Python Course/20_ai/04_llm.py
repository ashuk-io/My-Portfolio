import ollama

def chat_once(user_message: str) -> str:
    resp = ollama.chat(
        model="deepseek-r1:1.5b",  # adjust to your model tag
        messages=[{"role": "user", "content": user_message}],
        options={"temperature": 0.7}
    )
    return resp.message["content"]

if __name__ == "__main__":
    prompt = input('Enter prompt : ')
    print(chat_once(prompt))
