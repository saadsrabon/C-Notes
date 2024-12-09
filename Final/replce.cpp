#include <bits/stdc++.h>
using namespace std;

string changedString(string str, string X, string jetaDiyeChangeKorteChai) {
    int XSize = (int)X.length();
    int i = 0;
    string result = "";

    while (i < (int)str.length()) {
        bool match = true;

        // Check for a match with X
        for (int j = 0; j < XSize; j++) {
            if (i + j >= (int)str.length() || str[i + j] != X[j]) {
                match = false;
                break;
            }
        }

        if (match) {
            // Append replacement and move i past the matched substring
            result += jetaDiyeChangeKorteChai;
            i += XSize;
        } else {
            // Append the current character and move i forward
            result += str[i];
            i++;
        }
    }

    return result;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Clear the newline character after reading T

    string jetaDiyeChangeKorteChai = "#";
    while (T--) {
        string S, X; // Correct declaration of S and X
        getline(cin, S);
        getline(cin, X);

        cout << changedString(S, X, jetaDiyeChangeKorteChai) << endl;
    }
    return 0;
}
