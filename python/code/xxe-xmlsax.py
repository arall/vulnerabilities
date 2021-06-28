parser = xml.sax.make_parser()
myHandler = MyHandler()
parser.setContentHandler(myHandler)

parser.setFeature(feature_external_ges, True) # Noncompliant
parser.parse("ressources/xxe.xml")