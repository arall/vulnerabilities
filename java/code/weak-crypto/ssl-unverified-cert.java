class TrustAllManager implements X509TrustManager {

    @Override
    public void checkClientTrusted(X509Certificate[] chain, String authType) throws CertificateException {  // Noncompliant, nothing means trust any client
    }

    @Override
    public void checkServerTrusted(X509Certificate[] chain, String authType) throws CertificateException { // Noncompliant, this method never throws exception, it means trust any server
        LOG.log(Level.SEVERE, ERROR_MESSAGE);
    }

    @Override
    public X509Certificate[] getAcceptedIssuers() {
        return null;
    }
}