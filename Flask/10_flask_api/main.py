from flask import Flask, jsonify
app = Flask(__name__)

@app.route('/')
def json():
    marks = {
        'John': 85,
        'Alice': 92,
        'Bob': 78,
        'Jeff': 90,
        'lily': 88
    }
    value = [1, marks, 69]
    return jsonify(value)

app.run(debug=True)