from flask import Flask,render_template,json
from flask import request
from flask import Request

app = Flask(__name__)

@app.route("/")
def home():
    # return 'hi'
    return render_template("index.html")

@app.route("/submit", methods=['GET'])
def index():
    # res = json.loads( request.form["u"])
    # res= request.form['text']
    print("hi")
    res=request.form["areatxt"]
    print("hi man")
    # res=request.form.get('text')
    # default_name = 'kritk'
    # data = request.form.get('/text', default_name)
    # # ma=str(res['text'])
    # print(res['text'])
    # # res = request.get_json()
    # text = res["text"]
    print(res)
    # return str(res['text'])
    return "asfjaskc"
    # return str()
  
   
  

if __name__ == "__main__":
    app.run(debug=True)
