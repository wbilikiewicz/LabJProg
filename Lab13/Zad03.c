/* Napisaæ program, który sprawdza, czy któreœ z hetmanów na szachownicy siê szachuj¹.
Program powinien dzia³aæ dobrze dla prostok¹tnej szachownicy dowolnych rozmiarów naturalnych (rozmiary mog¹ byæ sta³ymi w programie). Powinien pytaæ o liczbê i pozycje hetmanów na szachownicy, a nastêpnie drukowaæ komunikat w rodzaju:
	Hetman na E6 i hetman na H3 szachuja sie.
albo:
   Zadne dwa hetmany nie szachuja sie.*/
   
#include <stdio.h>

#define WYSOKOSC 8
#define SZEROKOSC 8

int szachownica[WYSOKOSC][SZEROKOSC];
int ilosc_hetmanow;

void zeruj_szachownice(void) {
	int x, y;
	for (y=0; y<WYSOKOSC; y++)
		for (x=0; x<SZEROKOSC; x++) szachownica[y][x] = 0;
}

int main() {
	zeruj_szachownice();
	
	printf("Podaj liczbe hetmanow: ");
	scanf("%i", &ilosc_hetmanow);
	
	char c;
	int n, x, y;
	for (n=1; n<=ilosc_hetmanow; n++) {
		printf("Podaj pozycje hetmana %i: ", n);
		scanf("%c%i", &c, &y);
		
	}
}
