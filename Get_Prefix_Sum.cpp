#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int N;
    cin>>N;
    vector<long long int>A(N);

    for(int i =0; i<N; i++)
    {
        cin>> A[i];
    };

    vector<long long int> v(N);
    v[0]=A[0];
    for(int j =1; j<N; j++)
    {
        v[j]=v[j-1]+A[j];
    }

     reverse(v.begin(), v.end());

    for (auto i : v)
        {cout << i << " ";};

    return 0;
}