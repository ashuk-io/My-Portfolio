from flask import Flask, render_template, request

app = Flask(__name__)
@app.route("/", methods = ["GET", "POST"])

def forms():
    if request.method == "POST":
        with open("file.txt", 'a') as f:
            f.write(f'''The name is {request.form['name']}
Email is {request.form['email']}\n\n''')
        return render_template("contact.html")
    else: 
        return render_template("contact.html")

        

app.run(debug=True)
