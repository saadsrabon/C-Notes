#include<bits/stdc++.h>
using namespace std;
int main() 
{

    // stl constructor
    list<int> l(10,3);
    cout<<"Size of list: "<<l.size()<<endl;

    list<int> l2(l.begin(),l.end());

    list<int> l3={1,2,3,4,5,6,7,8,9,10};
    list<int> l4(l3);
    int a[]={1,2,3,4,5,6,7,8,9,10};
    list<int> l5(a,a+10);
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    list<int> l6(v.begin(),v.end());
    // Print the list
    for(auto x:l){
        cout<<x<<endl;
    }
    cout<<"Size of list: "<<l.size()<<endl;
    cout<<"Size of list: "<<l2.size()<<endl;
    cout<<"Size of list: "<<l3.size()<<endl;
    cout<<"Size of list: "<<l4.size()<<endl;
for(auto x:l5){
        cout<<x<<endl;
    };
    
    // stl capacity function
    return 0;
}