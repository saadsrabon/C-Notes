#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int N ,Q;
    cin >> N >> Q ;

    vector <long long int> A(N+1);
    for(int i =1 ; i<=N; i++)
    {
        cin>> A[i];
    };
    // while(Q--)
    // {
    //     int l,r;
    //     cin>> l >> r;
    //     int sum =0;
    //     for( int i =l; i<=r; i++ )
    //     {
    //         sum += A[i];
    //     }
    //     cout << sum<<endl;
    // }

    // Prefix Sum
    vector< long long int> v(N+1);
    v[1]=A[1];
    for (int j =2 ; j<=v.size(); j++)
    {
       
        v[j] =v[j-1] + A[j];
    };
    
    while(Q--)
    {
        int l ,r;
        long long int sum =0;
        cin>>l >>r;
        if(l==1){
           sum = v[r];
        }else{
            sum = v[r]- v[l-1];
        }
        cout << sum << endl;
    }

    return 0;
}