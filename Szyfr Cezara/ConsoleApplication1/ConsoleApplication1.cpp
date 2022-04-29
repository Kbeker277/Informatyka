// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

void TAK(char t[] ,int k) {
	int d;
	d = strlen(t);
	if (!(k >= -26 && k <= 26)) 
	{
		return;
	}
	if (k >= 0) {
		for (int i = 0; i < d; i++) {
			if (t[i] + k <= 'z') {
				t[i] += k;
			}
			else {
				t[i] = t[i] + k - 26;
			}
		}
		
	}
	else
	{
		for (int i = 0; i < d; i++) {
			if (t[i] + k >='a') {
				t[i] += k;
			}
			else {
				t[i] = t[i] + k + 26;
			}
		}
	}
}

int main()
{
	int k;
	char t[200];
	int i;
	char a;
	cout << "o ile przesunąć? :  \n";
	cin >> k;
	cout << "jakie słowo? :  \n";
	cin >> t;

	
	TAK(t, k);
	cout << "Zaszyfrowane : " << t << endl;
	cout << "Czy chcesz rozszyfrować? t/n :  \n";
	cin >> a;
	if(a == 't')
	{
		TAK(t, -k);
		cout << "po rozszyfrowaniu : " << t;
	}
	if(a == 'n')
	{
		exit;
	}
	
}

