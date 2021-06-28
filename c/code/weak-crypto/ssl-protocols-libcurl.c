#include <curl/curl.h>

CURL *curl;
curl_global_init(CURL_GLOBAL_DEFAULT);

// CURL_SSLVERSION_DEFAULT is the default option for CURLOPT_SSLVERSION
// It means legacy version TLSv1 and TLSv1.1 are enabled
curl = curl_easy_init(); // Noncompliant
curl_easy_setopt(curl, CURLOPT_URL, "https://example.com/");

// Perform the request
curl_easy_perform(curl);