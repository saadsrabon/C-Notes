#include<bits/stdc++.h>
using namespace std;
int main() 
{
// Capacity function in list
//     myList.size()
// myList.max_size()
// myList.clear()
// myList.empty()
// myList.resize()


    list<int> l={1,2,3,4,5,6,7,8,9,10};

    cout<<"Size of list: "<<l.size()<<endl;
    cout<<"Max size of list: "<<l.max_size()<<endl;
    l.clear();
    cout<<"Size of list: "<<l.size()<<endl;
    cout<<"Is list empty: "<<l.empty()<<endl;
    l.resize(10);
    for(auto x:l){
        cout<<x<<endl;
    }
    return 0;
}