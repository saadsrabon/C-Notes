#include <bits/stdc++.h>
using namespace std;

// Function to check if a string is valid
bool isValidString(const string &s) {
    stack<char> st;

    for (char ch : s) {
        if (!st.empty() && ((ch == '1' && st.top() == '0') || (ch == '0' && st.top() == '1'))) {
            // Remove the top character if it's a valid pair
            st.pop();
        } else {
            // Push the current character onto the stack
            st.push(ch);
        }
    }

    // If the stack is empty, the string is valid
    return st.empty();
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        string s;
        cin >> s;

        if (isValidString(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
