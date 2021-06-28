let socket = request.get({
    url: 'https://www.example.com',
    secureProtocol: 'TLSv1_2_method',
    checkServerIdentity: function() {}  // Noncompliant: hostname is not verified
});