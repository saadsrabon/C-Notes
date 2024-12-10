#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int N;
    cin>> N;
    int Array[N];
    for(int i=0 ; i<N; i++){
        cin>>Array[i];
        if(Array[i]<0){
            Array[i]=2;
        }else if(Array[i]>=0){
            Array[i]=1;
        }
    }
    for(int x: Array){
        cout<<x << " ";
    }

    return 0;
}