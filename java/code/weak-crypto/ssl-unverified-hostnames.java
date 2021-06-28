URL url = new URL("https://example.org/");
HttpsURLConnection urlConnection = (HttpsURLConnection)url.openConnection();
urlConnection.setHostnameVerifier(new HostnameVerifier() {
  @Override
  public boolean verify(String requestedHost, SSLSession remoteServerSession) {
    return true;  // Noncompliant
  }
});
InputStream in = urlConnection.getInputStream();