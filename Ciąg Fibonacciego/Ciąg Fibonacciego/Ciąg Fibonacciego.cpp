#include <iostream>
using namespace std;

int main()
{
    int c;
    int l0 = 0;
    int l1 = 1;
    int lf;

    cout << "Ile liczb wypisać :  \n";
    cin >> c;

    for (int i = 0; i <= c; i++) {
        if (i > 1) {
            lf = l0 + l1;
            l0 = l1;
            l1 = lf;
        }
        else {
            lf = i;
        }
        cout << lf << endl;
    }

  
}

