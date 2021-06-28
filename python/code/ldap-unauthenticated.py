import ldap

def init_ldap():
   connect = ldap.initialize('ldap://example:1389')

   connect.simple_bind('cn=root') # Noncompliant
   connect.simple_bind_s('cn=root') # Noncompliant
   connect.bind_s('cn=root', None) # Noncompliant
   connect.bind('cn=root', None) # Noncompliant