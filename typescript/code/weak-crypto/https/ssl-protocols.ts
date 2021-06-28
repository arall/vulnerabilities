let req = https.request(options, (res) => {
  res.on('data', (d) => {
    process.stdout.write(d);
  });
});  // Noncompliant