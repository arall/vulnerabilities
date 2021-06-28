class RawHtml(str):
  def __html__(self):
    return str(self)