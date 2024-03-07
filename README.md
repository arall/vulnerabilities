# Vulnerabilities

Examples of different vulnerabilities, in a variety of languages, shapes and sizes.

Useful for testing DAST and SAST tools.

# Security

If you plan to host this, make sure only /web is reachable!

# Sources
- https://rules.sonarsource.com/
- https://semgrep.dev/docs/cheat-sheets

# List of Intended vulnerabilities

## Dependencies

* go (`go.mod`)
  * grafana v8.2.3
* java
  * maven (`pom.xml`)
    * jackson-databind 2.9.2
    * log4j-core 2.10.0
* javascript
  * Static file (`jquery.min.js`)
    * jQuery v3.4.1
* nodejs
  * npm (`yarn.lock` & `package.json`)
    * tenvoy 7.0.2
  * yarn (`package-lock.json` & `package.json`)
    * tenvoy 7.0.2
* php
  * composer (`composer.lock` & `composer.json`)
    * phpmailer/phpmaile 6.4.1
      * league/flysystem 1.1.3 ("forced" inherit dependency vulnerability)
* python
  * pip (`requirements.txt`)
    * tendenci 12.0.10

## Code

TODO