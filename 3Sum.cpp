#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<vector<int>> ThreeSum(vector<int>&arr, int n){
    vector<vector<int>>ans;
    sort(arr.begin(), arr.end());

    for(int i=0;i<n;i++){
        int j=i+1;
        int k=n-1;
        if(i>0 && arr[i]==arr[i-1])continue;
        while(j<k){
            int sum = arr[i]+arr[j]+arr[k];
            if(sum<0){
                j++;
            }else if(sum>0){
                k--;
            }else{
                 ans.push_back({arr[i], arr[j], arr[k]});
                j++;k--;

                while(j<k && arr[j]==arr[j-1])j++;

                while(j<k && arr[k]== arr[k+1])k--;

            }


        }
    }
    return ans;

}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<vector<int>>res = ThreeSum(arr, n);

    if (res.empty()) {
        cout << "No triplets found that sum to 0." << endl;
    } else {
        cout << "Triplets that sum to 0 are:" << endl;
        for (const auto& triplet : res) {
            cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]" << endl;
        }
    }
    return 0;
}


