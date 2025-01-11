#include<bits/stdc++.h>
using namespace std;
int main() 
{    
    int N;
    cin>>N;
    int M;
    cin>>M;
     stack<int>myStack;
     queue<int>myQoue;
     int x;
     while(N--){
        cin>>x;
        
        myStack.push(x);
     };

  
        
        int y ;
    while(M--){
        cin>>y;
        myQoue.push(y);
    }



 if(myStack.size()!=myQoue.size()){
    cout<<"NO"<<endl;
    return 0;

 }
    while(!myStack.empty()){
        int val = myQoue.front();
        int val2 = myStack.top();

        
if (val != val2) {
            cout << "NO" << endl;
            return 0;
        }

        myStack.pop();
        myQoue.pop();
        
    
   
 }
     cout<<"YES";

    return 0;
}