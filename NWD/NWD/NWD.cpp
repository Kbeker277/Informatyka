


#include <iostream>
using namespace std;

int main()
{
    int a;
    int x;

    cout << "Pierwsza liczba:  ";
    cin >> a;
    cout << "Druga liczba:  ";
    cin >> x;

    while(a != x) {
        
        if (a > x) 
        {
            x = x - a;
        }
        else if(x < a)
        {
            a = a - x;  
        }

        
    }
    
    cout << a << " :NWD";






}

