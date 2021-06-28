from flask import request, redirect

@app.route('move')
def move():
    url = request.args["next"]
    return redirect(url) # Noncompliant