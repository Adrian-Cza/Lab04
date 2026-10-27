#include <iostream>
#include <math.h>

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

void KtoraNajmniejsza(int a, int b, int c);
int Najmniejsza(int a, int b, int c);

double PoleTrojkata(double a, double h);

void Dzielnik(int a);

double SredniaWazona(double a, double b);

void Przeciwprostokatna(double a, double b);

int main() {
	string imie;
	cout << "Podaj imie: ", cin >> imie;
	Powitanie(imie);

	Tabliczka();

	int liczba1, liczba2;
	cout << "Podaj a: ", cin >> liczba1;
	cout << "Podaj b: ", cin >> liczba2;
	KtoraWieksza(liczba1, liczba2);
	cout << "\nWieksza jest: " << Wieksza(liczba1, liczba2) << endl;;

	int liczba4, liczba5, liczba6;
	cout << "Podaj a: ", cin >> liczba4;
	cout << "Podaj b: ", cin >> liczba5;
	cout << "Podaj c: ", cin >> liczba6;
	KtoraNajmniejsza(liczba4, liczba5, liczba6);
	cout << "Najmniejsza jest: " << Najmniejsza(liczba4, liczba5, liczba6) << endl;

	double podstawa, wysokosc;
	cout << "Podaj podstawe i wysokosc: ";
	cin >> podstawa >> wysokosc;
	double pole = PoleTrojkata(podstawa, wysokosc);
	cout << "Podwojone pole: " << pole * 2 << endl;
	
	int liczba7;
	cout << "Podaj a: ", cin >> liczba7;
	Dzielnik(liczba7);

	double a, b;
	cout << "Podaj dwie wartosci: ";
	cin >> a >> b;
	cout << "Srednia wazona: " << SredniaWazona(a, b) << endl;

	double jedna, druga;
	cout << "Podaj przyprosotkatne: ";
	cin >> jedna >> druga;
	Przeciwprostokatna(jedna, druga);
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
		cout << "Liczba a jest wieksza" << endl;
	}
	else if(b > a){
		cout << "Liczba b jest wieksza" << endl;
	}
	else {
		cout << "Liczby sa rowne" << endl;
	}
}

int Wieksza(int a, int b) {
	int wieksza;
	a > b ? wieksza = a : wieksza = b;
	return wieksza;
}
// Zadanie 4
void KtoraNajmniejsza(int a, int b, int c) {
	if (a < b && a < c) {
		cout << "Liczba a jest najmniejsza" << endl;
	}
	if (b < a && b < c) {
		cout << "Liczba b jest najmniejsza" << endl;
	}
	if (c < a && c < b) {
		cout << "Liczba c jest najmniejsza" << endl;
	}
}

int Najmniejsza(int a, int b, int c) {
	int min = a;
	if (b < min) {
		min = b;
	}
	if (c < min) {
		min = c;
	}
	return min;
}
// Zadanie 5
double PoleTrojkata(double podstawa, double wysokosc) {
	double pole = podstawa * wysokosc / 2;
	cout << "Pole trojkata: " << pole << endl;
	return pole;
}
// Zadanie 6
void Dzielnik(int a) {
	cout << "Dzielniki liczby " << a << ":" << endl;
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			cout << i << endl;
		}
	}
}
// Zadanie 7
double SredniaWazona(double a, double b) {
	double wagaA, wagaB;

	cout << "Podaj wage pierwszej wartosci: ";
	cin >> wagaA;
	cout << "Podaj wage drugiej wartosci: ";
	cin >> wagaB;

	if (wagaA + wagaB == 0) {
		cout << "Suma wag nie moze wynosic 0." << endl;
		return 0;
	}

	return (a * wagaA + b * wagaB) / (wagaA + wagaB);
}
// Zadanie 8
void Przeciwprostokatna(double a, double b) {
	double przeciw = pow(a, 2) + pow(b, 2);
	cout << "Przeciwprosotkatna: " << przeciw;
}