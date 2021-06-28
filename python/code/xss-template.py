@xss.route('/insecure/no_template_engine_replace', methods =['GET'])
def no_template_engine_replace():
    param = request.args.get('param', 'not set')

    html = open('templates/xss_shared.html').read()
    response = make_response(html.replace('{{ name }}', param)) # Noncompliant: param is not sanitized
    return response