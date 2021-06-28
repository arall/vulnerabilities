from flask import request
import urllib

@app.route('/proxy')
def proxy():
    url = request.args["url"]
    return urllib.request.urlopen(url).read() # Noncompliant