let options = {
    secureProtocol: 'TLSv1_2_method',
    rejectUnauthorized: false ; // Noncompliant
};

let socket = tls.connect(443, "www.example.com", options, () => {
  process.stdin.pipe(socket);
  process.stdin.resume();
});  // Noncompliant