from flask import Flask, render_template
# app = Flask(__name__, static_url_path = '/public') #change the static url path
app = Flask(__name__, static_folder="assets",static_url_path = '/static')  # changing static folder location
    
@app.route("/")
def index():
    return render_template("index.html")

app.run(debug=True)