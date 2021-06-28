const Formidable = require('formidable');

const form = new Formidable(); // Noncompliant, this form is not safe
form.uploadDir = ""; // because upload dir is not defined (by default os temp dir: /var/tmp or /tmp)
form.keepExtensions = true; // and file extensions are kept