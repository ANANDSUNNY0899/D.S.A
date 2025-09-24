#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>


using namespace std;

vector<int> dailyTemperatures(vector<int>& temp) {
    int n = temp.size();
    vector<int>ans(n,0);
    stack<int>st;

    for(int i=0;i<n;i++){
        int ele = temp[i];

        while(!st.empty() && ele>temp[st.top()]){
            int j = st.top();
            st.pop();
            ans[j] = i-j;

        }
        st.push(i);
    }
    return ans;
    
}

int main(){
    cout<<"size of array are: "<<endl;
    int n;
    cin>>n;
    vector<int>arr(n);
    cout<<"Entry of Element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int>res = dailyTemperatures(arr);
    cout<<"Final Result are: "<<endl;
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }

}