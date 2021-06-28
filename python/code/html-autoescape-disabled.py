from jinja2 import Environment

env = Environment() # Noncompliant; New Jinja2 Environment has autoescape set to false
env = Environment(autoescape=False) # Noncompliant