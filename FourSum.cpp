#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> FourSum(vector<int>&arr, int n, int target){
    vector<vector<int>> v;
    sort(arr.begin(), arr.end());
    for(int i=0;i<n-3;i++){
          if (i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }
        for(int j=i+1;j<n-2;j++){
             if (j > i + 1 && arr[j] == arr[j - 1]) {
                continue;
            }
            int l = j+1;
            int k = n-1;
            while(l<k){
                int sum = arr[i]+arr[j]+arr[l]+arr[k];
                if(sum>0){
                    k--;
                }else if(sum<0){
                    j++;
                }else{
                    v.push_back({arr[i], arr[j], arr[l], arr[k]});
                    l++;k--;
                    while(j<k && arr[j]==arr[j+1])j++;
                    while(j<k && arr[k] == arr[k-1])k--;

                }
            }
            
        }
    }
    return v;
}

int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>> res = FourSum(arr, n, target);
    for (const auto& quad : res) {
            cout << "[" << quad[0] << ", " << quad[1] << ", " << quad[2] << ", " << quad[3] << "]" << endl;
        }
    return 0;

}