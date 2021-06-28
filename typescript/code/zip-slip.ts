const AdmZip = require('adm-zip');
const fs = require('fs');

const zip = new AdmZip("zip-slip.zip");
const zipEntries = zip.getEntries();
zipEntries.forEach(function (zipEntry) {
  fs.createWriteStream(zipEntry.entryName); // Noncompliant
});