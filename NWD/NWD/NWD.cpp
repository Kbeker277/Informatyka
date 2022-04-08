


#include <iostream>
using namespace std;

int main()
{
    int a;
    int x;
    int n;
    

    cout << "Pierwsza liczba:  ";
    cin >> a;
    cout << "Druga liczba:  ";
    cin >> x;

    int i = a * x;

    while(a != x) {
        
        
        if (a > x) 
        {
            a = a - x;
        }
        else
        {
            x = x - a;
        }

       

    }
    n = i / a;
    cout << a << " :NWD" << endl;
    cout << n << " :NWW" << endl;





}

