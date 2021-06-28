# For DES cipher
des = pyDes.des('ChangeIt') # Noncompliant
des = pyDes.des('ChangeIt', pyDes.CBC, "\0\0\0\0\0\0\0\0", pad=None, padmode=pyDes.PAD_PKCS5) # Noncompliant
des = pyDes.des('ChangeIt', pyDes.ECB, "\0\0\0\0\0\0\0\0", pad=None, padmode=pyDes.PAD_PKCS5) # Noncompliant