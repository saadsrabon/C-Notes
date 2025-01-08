#include <bits/stdc++.h>
using namespace std;

void printList(list<int>& mylist) {

    cout << "L -> ";
    for (int val : mylist) {
        cout << val << " ";
    }
    cout << endl;

    
   cout << "R -> ";
    for (auto it = --mylist.end(); it != mylist.begin(); --it) {
        cout << *it << " ";
    }
    if (mylist.empty()==false) {
        cout << *mylist.begin(); 
    }
    cout << endl;
}

int main() {
    int Q;
    cin >> Q;

    list<int> mylist; 

    while (Q--) {
        int X, V;
        cin >> X >> V;

        if (X == 0) {
        
            mylist.push_front(V);
        } else if (X == 1) {
            
            mylist.push_back(V);
        } else if (X == 2) {
        
            if (V < 0 || V >= mylist.size()) {
        
                printList(mylist);
                continue;
            }

            auto it = mylist.begin();
            for(int i = 0; i < V; ++i) {
                ++it;
            }
            mylist.erase(it);
        }
        printList(mylist);
    }

    return 0;
}
