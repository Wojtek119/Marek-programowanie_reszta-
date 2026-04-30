#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	/*int tablica[5] = {1, 4, 6, 6, 7};
	string nowaTablica = "";

	for (int i = 0; i < 5; i++)
	{
		nowaTablica += to_string(tablica[i]);
	}

	for (char liczba : nowaTablica) 
	{
		cout << "Typ zmiennej: " << typeid(liczba).name() << " " << liczba << endl;
	}*/



	/*vector<string>*/ string osoby[5] = {"Kasia", "Basia", "Asia", "Joasia"};

	/*osoby.push_back("Herkules");*/
	

	/*for (string osoba : osoby)
	{
		cout << osoba << endl;
	}

	int wielkosc = sizeof(osoby) / sizeof(osoby[0]);
	cout << wielkosc;*/


	/*int lata [8] = { 20, 22, 18, 35, 48, 26, 87, 70 };

	int dlugosc = sizeof(lata) / sizeof(lata[0]);
	float suma, srednia = 0;

	for (int wiek: lata)
	{
		suma += wiek;
	}

	srednia = suma / dlugosc;

	cout << "srednia lat to: " << srednia;*/


	string letters[2][4] = {
		{ "A", "B", "C", "D" },
		{ "E", "F", "G", "H" }
	};

	int dlugoscKolumn = sizeof(letters[0]) / sizeof(letters[0][0]);
	cout << dlugoscKolumn;
	/*for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cout << letters[i][j] << "\n";
		}
	}*/

	return 0;
}

