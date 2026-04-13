#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>
#include <time.h>
#include <stdio.h>


using namespace std;

//string imie; int liczba;
//int populacja = 1; int godzin = 0;
//int liczba, strzal, ileProb=0;
int liczba;
int main()
{
	//int dzien;
	//cout << "daj numer dnia tygodnia : ";
	//cin >> dzien;

	//switch (dzien)
	//{
	//	case 1:
	//		cout << "dziś jest poniedziałek";
	//		break;
	//	case 2:
	//		cout << "dziś jest wtorek";
	//		break;
	//	case 3:
	//		cout << "dziś jest środa";
	//		break;
	//	case 4:
	//		cout << "dziś jest czwartek";
	//		break;
	//	case 5:
	//		cout << "dziś jest piątek";
	//		break;
	//	case 6:
	//		cout << "dziś jest sobota";
	//		break;
	//	case 7:
	//		cout << "dziś jest niedziela";
	//		break;
	//}

	//for (int i = 15; i >= 0; i--)
	//{
	//	Sleep(1000);
	//	system("cls");
	//	cout << i << endl;
	//}

	//cout << "podaj imie: ";
	//cin >> imie;
	//cout << "Podaj dodatnia liczbe calkowita: ";
	//cin >> liczba;

	//for (int i =1; i<=liczba; i++)
	//{
	//	cout << i << ". " << imie << endl;
	//}

	//do
	//{
	//	godzin++;
	//	populacja = populacja * 2;
	//	cout << "minelo godzin: " << godzin;
	//	cout << " liczba bakterii: " << populacja << endl;
	//} while (populacja <= 1000000000);

	//cout << "Witaj! oto moja losowa liczba od 1...100" << endl;
	//srand(time(NULL));
	//liczba = rand() % 100 + 1;

	//while (strzal!=liczba)
	//{
	//	ileProb++;
	//	cout << "zagadnij liczbe (to twoja "<<ileProb<<" proba):";
	//	cin >> strzal;

	//	if (strzal == liczba)
	//		cout << "udalo ci sie, wygrales gre w " <<	ileProb << " probie" << endl;
	//	else if(strzal<liczba)
	//		cout << "za malo" << endl;
	//	else if (strzal > liczba)
	//		cout << "za duzo" << endl;

	//}
	//
	//getchar();

	//return 0;

	cout << "witaj w losowaniu! za 3 sekundy nastapi zwolnienie blokady";
	Sleep(3000);
	cout << endl;

	srand(time(NULL));

	for (int i = 1; i <= 6; i++)
	{
		liczba = rand() % 49 + 1;
		Sleep(1000);
		cout << liczba << "\a" << endl;

	}
	return 0;
	
	

}

