#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int N, S;
        cin >> N >> S;  
        int A[100] = {0};  

        for (int i = 0; i < N; i++) {
            cin >> A[i];  
        }

        int found = 0;  
        for (int i = 0; i < N - 2 && !found; i++) {
            for (int j = i + 1; j < N - 1 && !found; j++) {
                for (int k = j + 1; k < N; k++) {
                    if (A[i] + A[j] + A[k] == S) {
                        found = 1;
                        break;  
                    }
                }
            }
        }

        if (found == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
