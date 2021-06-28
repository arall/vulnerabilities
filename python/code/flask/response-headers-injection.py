from flask import Response, request
from werkzeug.datastructures import Headers

@app.route('/route')
def route():
    content_type = request.args["Content-Type"]
    response = Response()
    headers = Headers()
    headers.add("Content-Type", content_type) # Noncompliant
    response.headers = headers
    return response