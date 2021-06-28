from flask import request, current_app
import logging

@app.route('/log')
def log():
    input = request.args.get('input')
    current_app.logger.error("%s", input) # Noncompliant