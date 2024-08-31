#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> pascalans(int N) {
        vector<int> ansRow(N + 1, 1); // Initialize the row with 1's
        long long ans = 1;
        for(int col = 1; col < N; ++col) {
            ans = ans * (N - col) / col;
            ansRow[col] = ans;
        }
        return ansRow;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 0; i < numRows; ++i) {
            ans.push_back(pascalans(i));
        }
        return ans;
    }
};

int main() {
    int numRows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> numRows;

    Solution sol;
    vector<vector<int>> pascalTriangle = sol.generate(numRows);

    cout << "Pascal's Triangle:" << endl;
    for(const vector<int>& row : pascalTriangle) {
        for(int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
