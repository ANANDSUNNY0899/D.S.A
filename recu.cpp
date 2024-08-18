#include <bits/stdc++.h>
using namespace std;

void fun(int index, vector<int> &ds, int arr[], int n) {
    if (index >= n) {
        if (ds.size() == 0) {
            cout << "{}";
        } else {
            for (auto it : ds) {
                cout << it << " ";
            }
        }
        cout << endl;
        return;
    }

    // Exclude the current element
    //fun(index + 1, ds, arr, n);
    
    // Include the current element
    ds.push_back(arr[index]);
    fun(index + 1, ds, arr, n);
    
    // Backtrack to remove the last included element
    ds.pop_back();    
    fun(index + 1, ds, arr, n);

}

int main() {
    int arr[] = {65, 32, 67};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ds;
    fun(0, ds, arr, n);
    return 0;
}
