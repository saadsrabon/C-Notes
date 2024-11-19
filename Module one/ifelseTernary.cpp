#include<iostream>

using namespace std;

int main ()
{
    int x;
    cin >> x;
    if(x < 10)
    {
        cout << x <<" " << "is less than 10" << endl;
    }

    // with ternary operator

    x <10 ? cout << x << " " << "is less than 10" << endl : cout << x << " " << "is greater than 10" << endl;
}