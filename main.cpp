#include <iostream>
#include <cmath>

using namespace std;

// Zadanie. Napisz program, który odwróci otrzymany tekst od użytkownika.

char wy(string wyraz)
{
	string odw;

	for(int i=0;i<=wyraz.size();i++)
	odw[i] = wyraz[wyraz.size()-i];
	for(int i=0;i<=wyraz.size();i++)
	cout << odw[i];
}

main()
{
	string wyraz;

	cout<<"Podaj wyraz:\n";
	cin>>wyraz;

	wy(wyraz);
}
