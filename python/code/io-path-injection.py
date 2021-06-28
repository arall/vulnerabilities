from flask import request, send_file

@app.route('/download')
def download():
    file = request.args['file']
    return send_file("static/%s" % file, as_attachment=True) # Noncompliant