#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int MaxconsecutiveOne(vector<int>&arr, int n){
    int count=0;
    int mx=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=1){
            count=0;
        }else{
            count++;
        }
        mx = max(count, mx);
    }
    return mx;
}

int main(){
    int n;
    cout<<"enter the size of an array"<<endl;
    cin>>n;
    cout<<"enter the element of an array"<<endl;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<MaxconsecutiveOne(arr, n);
}