CURL *hnd = curl_easy_init();

curl_easy_setopt(hnd, CURLOPT_CUSTOMREQUEST, "GET");
curl_easy_setopt(hnd, CURLOPT_URL, "https://fresh-linkedin-profile-data.p.rapidapi.com/get-linkedin-profile?linkedin_url=https%3A%2F%2Fwww.linkedin.com%2Fin%2Fcjfollini%2F&include_skills=false&include_certifications=false&include_publications=false&include_honors=false&include_volunteers=false&include_projects=false&include_patents=false&include_courses=false&include_organizations=false");

struct curl_slist *headers = NULL;
headers = curl_slist_append(headers, "x-rapidapi-key: 6fb40d4b0fmshd4fbac6f0fb9771p1efb40jsn4f6e1c1bad82");
headers = curl_slist_append(headers, "x-rapidapi-host: fresh-linkedin-profile-data.p.rapidapi.com");
curl_easy_setopt(hnd, CURLOPT_HTTPHEADER, headers);

CURLcode ret = curl_easy_perform(hnd);