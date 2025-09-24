

// ✅ Basic Level (Easy)
// 1. Left Rotate Array by k Positions
// Rotate array to the left by k.

// 🔧 Logic: Reversal method or slicing

// 📌 Example: [1,2,3,4,5], k=2 → [3,4,5,1,2]



// Left Rotation

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>RotationArray(vector<int>&arr, int n, int k){
    
    k = k%n;
    reverse(arr.begin(), arr.begin()+k);

    reverse(arr.begin()+k, arr.end());

    reverse(arr.begin(), arr.end());

    return arr;
    
}



int main(){
    int n, k;
    cout<<"Enter size of an Element"<<endl;
    cin>>n;
    cout<<"Enter the kth rotation value"<<endl;
    cin>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<int>ans = RotationArray(arr, n, k);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;

}




// Right Rotation...........

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<int>RightRotate(vector<int>arr, int n, int k){
    k = k%n;
    reverse(arr.end()-k, arr.end());
    reverse(arr.begin(), arr.end()-k);
    reverse(arr.begin(), arr.end());
    return arr;
}


int main(){
    int n;
    int k;
    cin>>n;
    cin>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int>ans = RightRotate(arr, n, k);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

