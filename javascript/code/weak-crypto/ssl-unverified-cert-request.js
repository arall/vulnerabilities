let socket = request.get({
    url: 'www.example.com',
    secureProtocol: 'TLSv1_2_method',
    rejectUnauthorized: false ; // Noncompliant
});