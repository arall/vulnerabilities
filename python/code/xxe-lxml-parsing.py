parser = etree.XMLParser() # Noncompliant: by default resolve_entities is set to true
tree1 = etree.parse('ressources/xxe.xml', parser)
root1 = tree1.getroot()

parser = etree.XMLParser(resolve_entities=True) # Noncompliant
tree1 = etree.parse('ressources/xxe.xml', parser)
root1 = tree1.getroot()