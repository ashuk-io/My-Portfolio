from flask import Flask,flash, render_template
app = Flask(__name__)
app.secret_key = "secretkey"

@app.route("/")
def index():
    return render_template('index.html')
@app.route("/logout")
def logout():
    flash("You have been logged out", "success")
    return render_template('logout.html')

app.run(debug=True) 