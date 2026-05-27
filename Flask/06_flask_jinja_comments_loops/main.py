from flask import Flask, render_template
app = Flask(__name__)
@app.route('/')
def home():
    marks = {
        'John': 85,
        'Alice': 92,
        'Bob': 78,
        'Jeff': 90,
        'lily': 88
    }
    return render_template('index.html', marks=marks)

app.run(debug=True)
