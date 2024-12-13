#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

    
        int isSorted = 1;

   
        for (int j = 1; j < N; j++) { 
            if (A[j] < A[j - 1]) {
                isSorted = 0; 
                break;           
            }
        }

   
        if (isSorted) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
