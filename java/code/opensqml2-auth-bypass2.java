public ParserPool parserPool() {
  BasicParserPool basicParserPool = new BasicParserPool();
  basicParserPool.setIgnoreComments(false); // Noncompliant
  return basicParserPool;
}