#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int N;
    cin>>N;
    vector<int>A(N);

    for(int i=0; i<N; i++){
        cin>>A[i];
    };
    // Reverse Array
    for(int i=0, j=N-1; i<j; i++ , j--){
        int temp =A[i];
        A[i]=A[j];
        A[j]=temp;
      
      
    };
    
    for(auto x:A){
        cout<<x<<" ";
    }
    return 0;
}