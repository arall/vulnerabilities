from flask import request
import re

@app.route('/upload')
def upload():
    username = request.args.get('username')
    filename = request.files.get('attachment').filename

    re.search(username, filename) # Noncompliant