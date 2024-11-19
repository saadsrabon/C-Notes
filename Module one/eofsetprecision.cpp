#include<iostream>
#include<iomanip>
using namespace std;
void pres (){
    double x = 3.14159;
    cout << setprecision(5) << x << endl;
    cout << setprecision(9) << x << endl;
    cout << setprecision(3) << x << endl;
    cout << setprecision(2) << x << endl;
    cout << setprecision(1) << x << endl;
    cout <<fixed << setprecision(0) << x << endl;
    cout << fixed << setprecision(3) << x << endl;
}
int main()
{
    int x;
    while(cin >> x)
    {
        cout << x << " ";
    }

   pres();
    return 0;
}

// EOF means end of file
// setprecision is used to set the numb