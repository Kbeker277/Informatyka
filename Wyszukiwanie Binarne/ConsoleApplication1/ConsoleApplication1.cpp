

#include <iostream>
using namespace std;


int sukanie(int tak , int t[]) {
    
    int a = 0;
    int x = 15;
    int ls = (a + x)/2;
    while (a <= x) 
    {
        if (t[ls] == tak) 
        {
            return ls;
        }
        if (t[ls] > tak) 
        {
            x = ls - 1;
        }
        else 
        {
            a = ls + 1;
        }
        ls = (a + x) / 2;
    }
    return -1;
}
int main()
{
    
    int tak;
    int a = 0;
    int x = 7;
    int ls = (a + x) / 2;
    int t[15] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    
    cout << "jaka liczba :  \n";
    cin >> tak;
    cout << sukanie(tak,t);
}


