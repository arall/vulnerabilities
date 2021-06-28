from flask import request
import os

@app.route('/ping')
def ping():
    address = request.args.get("address")
    cmd = "ping -c 1 %s" % address
    os.popen(cmd) # Noncompliant