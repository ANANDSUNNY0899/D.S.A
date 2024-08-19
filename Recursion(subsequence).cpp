#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void fun(int index,vector<int> &ds,int arr[] ,int n){
	if(index>=n){
		for(auto it: ds){
			cout<<it<<" ";
		}
		if(ds.size()==0){
			    cout<<"{}";
			}
		cout<<endl;
		return;
	}
	fun(index+1,ds,arr,n);
	ds.push_back(arr[index]);
	fun(index+1,ds,arr,n);
	ds.pop_back();
}

int main(){
	int n=3;
	int arr[]={3,2,1};
	vector<int> ds;
	fun(0,ds,arr,n);
	return 0;
}
