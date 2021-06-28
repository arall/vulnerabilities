from flask import request
import pickle
import yaml

@app.route('/pickle')
def pickle_loads():
    file = request.files['pickle']
    pickle.load(file) # Noncompliant; Never use pickle module to deserialize user inputs

@app.route('/yaml')
def yaml_load():
    data = request.GET.get("data")
    yaml.load(data, Loader=yaml.Loader) # Noncompliant; Avoid using yaml.load with unsafe yaml.Loader