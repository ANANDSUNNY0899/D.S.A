#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Maximumsubarray(vector<int>&arr, int n){
    int res = arr[0];
    int mx = arr[0];
    for(int i=1;i<n;i++){
        res = max(arr[i], res+arr[i]);
        mx = max(res,mx);
    }
    return mx;
}

int main(){
    
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Maximumsubarray(arr, n)<<endl;
    return 0;
}
