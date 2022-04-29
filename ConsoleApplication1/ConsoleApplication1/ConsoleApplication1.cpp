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
}

int main()
{
	int k;
	char t[200];
	int i;
	cout << "o ile przesunąć? :  \n";
	cin >> k;
	cout << "jakie słowo? :  \n";
	cin >> t;

	TAK(t, k);
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
