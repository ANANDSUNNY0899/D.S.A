#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

// Function to count the number of distinct subsequences
int countDistinctSubsequences(const string& str) {
    int n = str.length();
    vector<int> dp(n + 1, 0);
    dp[0] = 1;  // Empty subsequence

    unordered_map<char, int> lastOccurrence;

    for (int i = 1; i <= n; ++i) {
        dp[i] = 2 * dp[i - 1];  // Each subsequence can be extended by the current character

        char currentChar = str[i - 1];

        // If the current character appeared before, subtract the subsequences counted twice
        if (lastOccurrence.find(currentChar) != lastOccurrence.end()) {
            dp[i] -= dp[lastOccurrence[currentChar] - 1];
        }

        // Update the last occurrence of the current character
        lastOccurrence[currentChar] = i;
    }

    // The result is the number of distinct subsequences of the whole string
    return dp[n];
}

// Function to determine the better string

string betterString(const string& str1, const string& str2) {
    int count1 = countDistinctSubsequences(str1);
    int count2 = countDistinctSubsequences(str2);

    if (count1 > count2) {
        return str1;
    } else if (count2 > count1) {
        return str2;
    } else {
        return str1;  // If counts are equal, return str1
    }
}

int main() {
    string str1 = "gfg";
    string str2 = "ggg";
    cout << betterString(str1, str2) << endl;

    str1 = "a";
    str2 = "b";
    cout << betterString(str1, str2) << endl;

    return 0;
}
