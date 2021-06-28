import tempfile

filename = tempfile.mktemp() # Noncompliant
tmp_file = open(filename, "w+")