#include <curl/curl.h>

CURL *curl;
curl_global_init(CURL_GLOBAL_DEFAULT);

curl = curl_easy_init();
curl_easy_setopt(curl, CURLOPT_URL, "https://example.com/");
curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L); // Noncompliant; CURLOPT_SSL_VERIFYPEER is set to 0, no peer's SSL certificate will be verified

//Perform the request
curl_easy_perform(curl);