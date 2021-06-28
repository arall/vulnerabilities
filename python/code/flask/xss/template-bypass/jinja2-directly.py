with open('template', 'r') as fin:
  jinja2.Template(fin.read()).render()