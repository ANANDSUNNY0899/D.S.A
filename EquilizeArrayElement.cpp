#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;
int func(vector<int>&arr, int n){
    unordered_map<int, int> mp;
    for(auto &it: arr){
        mp[it]++;
    }
    int mxcnt=0;

    for(auto &pair: mp){
        if(pair.second>mxcnt){
            mxcnt=pair.second;
        }
    }
    int res = n-mxcnt;
    return res;

}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<func(arr, n);
}