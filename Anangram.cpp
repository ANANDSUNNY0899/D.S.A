#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

vector<vector<string>> anagram(vector<string>& strs){
    unordered_map<string , vector<string>>mp;
    for(const string &s : strs){
        vector<int> char_counts(26, 0);

        for(char c : s){
            char_counts[c-'a']++;
        }

        string signature_key = "";
        for(int i=0;i<26;i++){
            signature_key+=to_string(char_counts[i]);
            signature_key += '#';
        }

        mp[signature_key].push_back(s);

    }



    vector<vector<string>> result;
    for(const auto& pair : mp){

        result.push_back(pair.second);
    }
    return result;
}

int main(){
    int n;
    cin>>n;
    vector<string>strs(n);
    for(int i=0;i<n;i++){
        cin>>strs[i];
    }



    anagram(strs);
    return 0;
}