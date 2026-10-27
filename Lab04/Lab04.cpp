#include <iostream>

using namespace std;

/*
int dodawanie(int a, int b); 
void wyswietlanie(int a, int b);

int zmiennaGlobalna = 10;

int main() { //kod 04_05
	int a = 45, b = 25;
	int suma = dodawanie(a, b);
	cout << "Jesli dodam " << a << " do " << b << " to otrzymam " << suma << endl;
	a += 4;
	wyswietlanie(a, b);
	cout << "Zmienna globalna: " << zmiennaGlobalna << endl;
	cout << "Wartosci a oraz b: " << a << " i " << b << endl;
	return 0;
}

int dodawanie(int c, int b) {
	b = c + b;
	return b;
}

void wyswietlanie(int a, int b) {
	cout << "Wynik procedury / funkcji z void: " << a + b << endl;
	zmiennaGlobalna = 20;
	a = 111;
	b = 222;
*/

// Zadanie 0
/*
	Wyswietli sie: 
	Jesli dodam 45 do 25 to otrzymam 70
	Wynik procedury / funkcji z void: 74
	Zmienna globalna: 20
	Wartosci a oraz b: 49 i 25
*/

void Powitanie(string a);
void Tabliczka();
void KtoraWieksza(int a, int b);
int Wieksza(int a, int b);

int main() {
	string imie;
	cout << "Podaj imie: ", cin >> imie;
	Powitanie(imie);

	Tabliczka();

	int liczba1, liczba2;
	cout << "Podaj a: ", cin >> liczba1;
	cout << "Podaj b: ", cin >> liczba2;
	KtoraWieksza(liczba1, liczba2);
	cout << "\nWieksza jest: " << Wieksza(liczba1, liczba2);
}
//Zadanie 1
void Powitanie(string a) {
	cout << "Czesc, " << a << endl << endl;
}
//Zadanie 2
void Tabliczka() {
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << i * j << " ";
		}
		cout << endl;
	}
	cout << endl;
}
// Zadanie 3
void KtoraWieksza(int a, int b) {
	if (a > b) {
		cout << "Liczba a jest wieksza";
	}
	else if(b > a){
		cout << "Liczba b jest wieksza";
	}
	else {
		cout << "Liczby sa rowne";
	}
}

int Wieksza(int a, int b) {
	int wieksza;
	a > b ? wieksza = a : wieksza = b;
	return wieksza;
}