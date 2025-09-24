//Check palindrome at most one deletion of ans element are posssible....

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool Helper(vector<string>&arr, int l, int r){
    while(l<r){
        if(arr[l]!=arr[r]){
            return false;
        }l++;
        r--;
    }return true;

}
bool ValidPalindrome_2(vector<string>&arr, int n){
    int left=0;
    int right = n-1;
    while(left<right){
        if(arr[left]==arr[right]){
            left++;
            right--;
        }else{
            bool option1 = Helper(arr,left+1,right);
            bool option2 = Helper(arr,left,right-1);
            return option1 || option2;
        }
        
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    cout<<"Enter the value of an array"<<endl;
    vector<string>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"ValidPalindrome ?: "<<(ValidPalindrome_2(arr, n) ? "Yes" : "No")<<endl;
    return 0;

}