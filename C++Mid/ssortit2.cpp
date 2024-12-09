#include<bits/stdc++.h>
using namespace std;

// Function to sort the array in ascending order and return the array
int* sort_it( int N)
{   
    int *A= new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A, A + N , greater<int>());
    return A;
}
int main() 
{
    int N;
    cin >> N;
    int* B = sort_it(N);
    for (int i = 0; i < N; i++)
    {
        cout << B[i] << " ";
    };
    delete[] B;
    return 0;
}