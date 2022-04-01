// Liczby Pierwsze C++.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{

    int l = 0;
    int p = 2;
    int x;
    int skip = 0;
    
    cout << "podaj ile liczb:  ";
    
    cin >> x;

    while (l < x)
    {
        skip = 0;
        for (int d = 2; d <= p - 1; d++) 
        {
            
            if (p % d == 0) 
            {
                skip = 1;
            }
            
        }
        if (skip == 0) 
        {
            cout << p << ", ";
            l = l + 1;
        }
         p = p + 1;
        
    }

}
    




