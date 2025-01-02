#include<bits/stdc++.h>
using namespace std;
int main() 
{
    list<int>A;
  while(true){
    int x;
    cin>>x;
    if(x==-1){
        break;
    }
    A.push_back(x);
  };

  A.sort();
  A.unique();
//print the list
    for(auto i = A.begin(); i!=A.end(); i++)
    {
        cout<<*i<<" ";
    }   
 

    return 0;
}