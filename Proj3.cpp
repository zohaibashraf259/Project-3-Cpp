#include <iostream>
using namespace std;

int main () 
{
    int a, b;
    cout << "Enter two numbers:";
    cin >> a >> b;
    
    if ( a>b )
    {
        cout << "A is greater than B."<<endl;
    }
    else 
    {
        cout << "B is greater than A."<<endl;
    }
    return 0;
}
