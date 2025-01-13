#include <bits/stdc++.h>
using namespace std;

// Function to check if the binary string will be empty after eliminations
bool isStringEmptyAfterElimination(const string &s) {
    stack<char> st; // Stack to track characters
    
    for (char ch : s) {
        if (!st.empty() && ((st.top() == '0' && ch == '1') || (st.top() == '1' && ch == '0'))) {
            // Eliminate the pair
            st.pop();
        } else {
            // Otherwise, push the current character onto the stack
            st.push(ch);
        }
    }
    
    return st.empty(); // The string is empty if the stack is empty
}

int main() {
    int t;
    cin >> t; // Number of test cases
    
    while (t--) {
        string s;
        cin >> s; // Input string
        
        if (isStringEmptyAfterElimination(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
