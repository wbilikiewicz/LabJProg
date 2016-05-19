/* Napisa� program, kt�ry sprawdza, czy kt�re� z hetman�w na szachownicy si� szachuj�.
Program powinien dzia�a� dobrze dla prostok�tnej szachownicy dowolnych rozmiar�w naturalnych (rozmiary mog� by� sta�ymi w programie). Powinien pyta� o liczb� i pozycje hetman�w na szachownicy, a nast�pnie drukowa� komunikat w rodzaju:
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
