#include <curl/curl.h>

CURL *curl;
curl_global_init(CURL_GLOBAL_DEFAULT);

curl = curl_easy_init();
curl_easy_setopt(curl, CURLOPT_URL, "https://example.com/");

curl_easy_setopt(curl, CURLOPT_SSLVERSION, CURL_SSLVERSION_TLSv1); // Noncompliant;  legacy version TLSv1 and TLSv1.1 are enabled

//Perform the request
curl_easy_perform(curl);