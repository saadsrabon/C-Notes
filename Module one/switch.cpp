#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    switch (x)
    {
    case  1:
        cout << "one" << endl;
        break;
    case 2:
        cout << "two" << endl;
        break;
    case 3:
        cout << "three" << endl;
        break;
    case 4:
        cout << "four" << endl;
        break;
    
    default:
        cout << "not in range" << endl;
        break;
    }
}