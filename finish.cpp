#include <iostream> // Wskazanie biblioteki
#include <cmath> // Wskazanie biblioteki

using namespace std; // Wskazanie standardowej przestrzenii nazw

// Zadanie. Napisz program, który odwróci otrzymany tekst od użytkownika.

char wy(string wyraz) // Instrukcja char przyjmująca typ "string" dla "wyraz"
{
	string odw; // Deklaracja string odw

	for(int i=0;i<=wyraz.size();i++) // Pętla for
	odw[i] = wyraz[wyraz.size()-i]; // Przypisanie dla odw
	for(int i=0;i<=wyraz.size();i++) // Odwrócenie tekstu
	cout << odw[i]; // Wypisanie odwróconego tekstu
}

main() // Instrukcja main
{
	string wyraz; // Deklaracja string wyraz

	cout<<"Podaj wyraz:\n"; // Wyświetlenie tekstu
	cin>>wyraz; // Przyjęcie danych

	wy(wyraz); // Użycie instrukcji wy i przekazanie "wyraz"
}
