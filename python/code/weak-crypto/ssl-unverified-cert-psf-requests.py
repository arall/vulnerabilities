import requests

requests.request('GET', 'https://example.domain', verify=False) # Noncompliant
requests.get('https://example.domain', verify=False) # Noncompliant