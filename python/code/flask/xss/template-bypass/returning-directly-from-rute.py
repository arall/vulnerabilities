@app.route("/index/<msg>")
def index(msg):
  return "Hello! " + msg