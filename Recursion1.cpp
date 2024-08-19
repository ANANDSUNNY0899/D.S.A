#include<iostream>
using namespace std;

void func(int n,int i){
	if(i>n){
		return;
	}
	cout<<"Output"<<endl;
	func(n,i+1);
	
}
int main(){
	int n;
	cin>>n;
	int i=0;
	func(n,i);
	return 0;
}
