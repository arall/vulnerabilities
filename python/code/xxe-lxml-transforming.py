ac = etree.XSLTAccessControl(read_network=True, write_network=False)  # Noncompliant, read_network is set to true/network access is authorized
transform = etree.XSLT(rootxsl, access_control=ac)