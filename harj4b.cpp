/*		Valtteri Louhelainen

Ks.ohjelmakoodia: harj4(omat esimerkit)

a) Kirjoita, tallenna ja suorita ym.ohjelma.
b) Kommentoi ylla olevan esimerkin kaikki rivit(mitä rivillä tapahtuu).
c) Muuta vakioden nimet niin, että
MAX = > MINIMI
max = > MAKSIMI

Muuta ohjelmaa niin, että voit tulostaa ohjelmalla seuraavat ilmoitukset :
Summa on pienempi kuin MINIMI
Summa on suurempi kuin MAKSIMI
Summa on MINIMIN ja MAKSIMIN välissä*/

#include <iostream>
using namespace std;
#define MINIMI 10
const int MAKSIMI = 20;
int summa;
void Laske(int, int);
void main()
{
	int luku1;
	int luku2;
	cout << "Anna luku 1: ";
	cin >> luku1;
	cout << "Anna luku 2: ";
	cin >> luku2;
	Laske(luku1, luku2);
	if (summa == MINIMI || summa == MAKSIMI)
		cout << "Summa on " << summa << ".\n";
	if (MINIMI < summa && summa < MAKSIMI)
		cout << "Summa on " << MINIMI << ":n ja " << MAKSIMI << ":n välissä.\n";
	else if (summa < MINIMI)
		cout << "Summa on pienempi kuin " << MINIMI << ".\n";
	else if (summa > MAKSIMI)
		cout << "Summa on suurempi kuin " << MAKSIMI << ".\n";
	
}
void Laske(int eka, int toka)
{
	summa = eka + toka;
}