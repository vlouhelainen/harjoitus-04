/*		Valtteri Louhelainen

Ks. ohjelmakoodia: harj4 (omat esimerkit)

a) Kirjoita, tallenna ja suorita ym. ohjelma.
b) Kommentoi ylla olevan esimerkin kaikki rivit (mit‰ rivill‰ tapahtuu).*/



#include <iostream>
using namespace std;
#define MINIMI 10 //m‰‰ritell‰‰n MINIMI ja annetaan sille arvo 10
const int MAKSIMI = 20; //m‰‰ritell‰‰n 32-bittinen kokonaislukumuuttuja MAKSIMI ja annetaan sille arvo 20
int summa; //m‰‰ritell‰‰n 32-bittinen kokonaislukumuuttuja summa
void Laske(int, int); //m‰‰ritell‰‰n funktio, jolla kaksi argumenttia
void main() //m‰‰ritell‰‰n p‰‰funktio
{
	int luku1 = 2; //m‰‰ritell‰‰n 32-bittinen kokonaislukumuuttuja luku1 ja tallennetaan siihen arvo 2
	int luku2; //m‰‰ritell‰‰n 32-bittinen kokonaislukumuuttuja luku2
	cout << "Anna luku: "; //tulostetaan ruudulle "Anna luku: "
	cin >> luku2; //odotetaan, kunnes k‰ytt‰j‰ syˆtt‰‰ arvon ja tallennetaan se muuttujaan luku2
	Laske(luku1, luku2); //kutsutaan Laske-funktiota k‰ytt‰en argumentteina muuttujia luku1 ja luku2
	if (summa < MINIMI) //tarkistetaan, onko lukujen summa v‰hemm‰n kuin MINIMI:n arvo (10)
		cout << "Summa on pienempi kuin " << MINIMI << "\n"; //tulostetaan teksti ja MINIMI:n arvo, jos ehto t‰yttyi
	if (summa < MAKSIMI) //tarkistetaan, onko lukujen summa v‰hemm‰n kuin MAKSIMI:n arvo (20)
		cout << "Summa on pienempi kuin " << MAKSIMI << "\n"; //tulostetaan teksti ja MAKSIMI:n arvo, jos ehto t‰yttyi
}
void Laske(int eka, int toka) //m‰‰ritell‰‰n funktio, nimet‰‰n sen argumentit
{
	summa = eka + toka; //tallennetaan Laske-funktion argumenttien summa summa-muuttujaan
}