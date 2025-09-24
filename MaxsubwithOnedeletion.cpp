#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int MaxsubwithOnedeletion(vector<int>&arr, int n){

    vector<int> forward(n), backward(n);
    forward[0]=arr[0];
    backward[n-1]=arr[n-1];

    for(int i=1;i<n;i++){
        forward[i] = max(arr[i], arr[i]+forward[i-1]);
    }
    for(int i=n-2;i>=0;i--){
        backward[i] = max(backward[i+1]+arr[i], arr[i]);
    }

    int res = *max_element(forward.begin(), forward.end());

    for(int i=1;i<n-1;i++){
        int sum = forward[i-1] + backward[i+1];
        if(sum>res){
            res = sum;
        }
    }
    return res;
    

}

int main(){

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<MaxsubwithOnedeletion(arr, n)<<endl;
}