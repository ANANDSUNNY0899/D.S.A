// #include <iostream>
// #include <stack>
// using namespace std;

// void sortstack(stack<int>& s) {
//     stack<int> tempStack;

//     while (!s.empty()) {
//         int temp = s.top();
//         s.pop();

//         while (!tempStack.empty() && tempStack.top() < temp) {
//             s.push(tempStack.top());
//             tempStack.pop();
//         }
//         tempStack.push(temp);
//     }

//     while (!tempStack.empty()) {
//         s.push(tempStack.top());
//         tempStack.pop();
//     }
// }

// void printstack(stack<int> s) {
//     while (!s.empty()) {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout << endl;
// }

// int main() {
//     stack<int> s;
//     int n, element;

//     cout << "Enter the number of elements: ";
//     cin >> n;

//     cout << "Enter the elements: ";
//     for (int i = 0; i < n; ++i) {
//         cin >> element;
//         s.push(element);
//     }

//     cout << "Stack before sorting: ";
//     printstack(s);

//     sortstack(s);

//     cout << "Stack after sorting: ";
//     printstack(s);

//     return 0;
// }





#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sortstack(stack<int> &s){
    stack<int> tempstack;
    while(!s.empty()){
        int temp = s.top();
        s.pop();
        while(!tempstack.empty() && tempstack.top()<temp){
            s.push(tempstack.top());
            tempstack.pop();
        }
        tempstack.push(temp);
    }
    while(!tempstack.empty()){
        s.push(tempstack.top());
        tempstack.pop();
    }

}

void print(stack<int> s){
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
}

int main(){
    stack<int> s;
    int n, element;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> element;
        s.push(element);
    }

    cout << "Stack before sorting: ";
    print(s);

    sortstack(s);

    cout << "Stack after sorting: ";
    print(s);

    return 0;
}