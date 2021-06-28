Email email = new SimpleEmail();
email.setSmtpPort(465);
email.setAuthenticator(new DefaultAuthenticator(username, password));
email.setSSLOnConnect(true); // Noncompliant; setSSLCheckServerIdentity(true) should also be called before sending the email
email.send();