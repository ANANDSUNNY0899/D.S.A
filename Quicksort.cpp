#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr,int low,int high){
    int pivot = arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high){
            i++;
        }
        while(arr[j]>pivot && j>=low){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
        return j;
}

void quicksort(vector<int> &arr,int low,int high){
    if(low<high){
    int m = partition(arr,low,high);
    quicksort(arr,low,m-1);
    quicksort(arr,m+1,high);
    }
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    quicksort(arr,0,n-1);


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}