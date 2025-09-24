// #include<iostream>
// #include<vector>
// using namespace std;

// int partitation(vector<int>&arr, int low, int high){
//     int pivot = arr[high];
//     int i = low-1;

//     for(int j=low; j<high;j++){
//         if(arr[j] < pivot){
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i+1], arr[high]);
//     return i+1;
// }

// void QuickSort(vector<int>&arr, int low, int high){
//     if(low<high){
//         int p = partitation(arr, low, high);

//         QuickSort(arr, low, p-1);
//         QuickSort(arr, p+1, high);
//     }
// }

// int main(){

//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     QuickSort(arr,0,n-1);
//     cout<<"Sorted After Applying the Quick-Sort: ";

//     for(auto it: arr){
//         cout<<it<<" ";
//     }
//     return 0;

// }



#include<iostream>
#include<vector>
using namespace std;

int partitation(vector<int>&arr, int low, int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j=low; j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}

void QuickSort(vector<int>&arr, int low, int high){

    if(low<high){
        int p = partitation(arr,low, high);

        QuickSort(arr, low, p-1);
        QuickSort(arr, p+1, high);
    }

}

int main(){
    int n;
    cout<<"Enter the size of a vector: "<<endl;
    cin>>n;
    vector<int>arr(n);

    cout<<"Enter the Element: "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    QuickSort(arr, 0, n-1);

    cout<<"Element After Sorted Array are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;


}
