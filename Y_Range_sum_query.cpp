#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int N ,Q;
    cin>> N;
    cin >> Q;

    vector<long long int> A(N+1);
    // Take input for the Array
    for(int i=1; i<A.size(); i++){
        cin>>A[i];
        
    };

    // Create Prefix sum for them
    vector<long long int> Prefix(A);

   

   Prefix[1]= A[1];
   for(int i=2; i<A.size(); i++){
        Prefix[i]=Prefix[i-1]+A[i];
   };
     while(Q--){
          int l;
          int r;
          cin>>l;
          cin>>r;
          if(l==1){
            cout<<Prefix[r]<<endl;
          }else{
            cout<<Prefix[r]-Prefix[l-1]<<endl;
          }
     };
    // Take all the query and the input;
    
    return 0;
}