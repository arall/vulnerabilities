from flask import request
import subprocess

@app.route('/ping')
def ping():
    address = request.args.get("address")
    cmd = "ping -c 1 %s" % address
    subprocess.Popen(cmd, shell=True) # Noncompliant; using shell=true is unsafe