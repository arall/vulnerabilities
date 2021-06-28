ServicePointManager.ServerCertificateValidationCallback +=
    (sender, certificate, chain, errors) => {
        return true; // Noncompliant: trust all certificates
    };