#include<iostream>
using namespace std;
int fun() {
    int* a = new int;
    int* b = new int;
    while (cin >> *a >> *b) {
        cout << *a << " " << *b << endl;
    }
    return *a+*b;
}
int main() {
    
  

     cout << fun() << endl;
    return 0;
}