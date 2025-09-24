#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> ReverseArray(vector<int> &arr, int n)
{ 
    vector<int> temp;
    for(int i=0;i<n;i++){
        temp.push_back(arr[n-i-1]);
    }
    return temp;

}


int main()
{
    int n;
    cout<<"Enter the length of an array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Array element entry"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans = ReverseArray(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
}




