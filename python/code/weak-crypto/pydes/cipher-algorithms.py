import pyDes;

des1 = pyDes.des('ChangeIt')  # Noncompliant: DES works with 56-bit keys allow attacks via exhaustive search
des2 = pyDes.des('ChangeIt', pyDes.CBC, "\0\0\0\0\0\0\0\0", pad=None, padmode=pyDes.PAD_PKCS5) # Noncompliant: DES works with 56-bit keys allow attacks via exhaustive search

tdes1 = pyDes.triple_des('ChangeItWithYourKey!!!!!')  # Noncompliant: Triple DES is vulnerable to meet-in-the-middle attack
tdes2 = pyDes.triple_des('ChangeItWithYourKey!!!!!', pyDes.CBC, "\0\0\0\0\0\0\0\0", pad=None, padmode=pyDes.PAD_PKCS5) # Noncompliant: Triple DES is vulnerable to meet-in-the-middle attack