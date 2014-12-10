/**************************************
 *Ohjelman nimi: harjoitus 4
 *Tekij‰: Eetu Salo
 *Lyhyt kuvaus:
 *Ks. ohjelmakoodia: harj4 (omat esimerkit)
 *  a) Kirjoita, tallenna ja suorita ym. ohjelma.
 *  b) Kommentoi ylla olevan esimerkin kaikki rivit (mit‰ rivill‰ tapahtuu).
 *  c) Muuta vakioden nimet niin, ett‰
 *      MAX => MINIMI
 *      max => MAKSIMI
 * Versio: 1.0
 * PVM: 10.9.2014
 *******************************/

 


#include <iostream> //otsikkotiedoston esittely
using namespace std; 

//vakioiden m‰‰rittely
const int MINIMI = 10; 
const int MAKSIMI = 20; 

//julkisten muuttujien esittely
int summa; 

//esitell‰‰n aliohjelmat
void Laske(int, int);

void main() //p‰‰ohjelman alku
{ //alkava lohkosulku
	//paikallisten muuttujien m‰‰rittely
	int luku1 = 2;
	int luku2;

	cout << "Syˆt‰ luku: "; //Tuodaan n‰ytˆlle "Syˆt‰ luku:"
	cin >>luku2; //syˆtetty luku on muuttujan luku2 arvo

	Laske(luku1, luku2); //aliohjelman kutsu

	if (summa < MINIMI)
		cout << "Summa on pienempi kuin " <<MINIMI;
	if (summa > MAKSIMI)
		cout << "Summa on suurempi kuin " << MAKSIMI;
	if (summa > MINIMI && summa < MAKSIMI)
		cout << "Summa on suurempi kuin " << MINIMI << " ja pienempi kuin " << MAKSIMI;
} //lopettava lohkosulku

void Laske(int eka, int toka) // aliohjelman m‰‰rittely
{
	summa = eka + toka;
}