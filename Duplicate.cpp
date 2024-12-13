#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int N;
    cin>> N;
    vector<int> A(N);
    for(int i =0; i<N; i++)
    {
        cin>>A[i];
    };

    int flag =0;

   sort(A.begin(),A.end());
    
    for(int i=1; i<N; i++)
    {
        if(A[i]==A[i-1])
        {
             flag =1;
             break;
        }
    };

    if(flag==1){
        cout<< "YES";
    }else{
        cout <<"NO";
    }
    return 0;
}