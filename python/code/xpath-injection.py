from flask import request
import xml.etree.ElementTree as ET

tree = ET.parse('users.xml')
root = tree.getroot()

@app.route('/user')
def user_location():
    username = request.args['username']
    query = "./users/user/[@name='"+username+"']/location"
    elmts = root.findall(query) # Noncompliant
    return 'Location %s' % list(elmts)