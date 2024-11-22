#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[10000 + 5], N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A, A + N);
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    };
    sort(A, A + N, greater<int>());
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    };
    return 0;
}