/* Po inicjalizacji program pyta o nazwisko lub imię osoby i znajduje w spisie brakujące dane na jej temat: imię, nazwisko i pensję.
  Należy napisać ciała funkcji znajdz_nazwisko oraz znajdz_imie -- ich nagłówki i komentarze opisujące sposób działania są w programie podane.
  W pierwszej wersji można nie realizować funkcji sortuj_spis, a wyszukiwanie zorganizować jakkolwiek. W drugiej (lepszej) wersji zrobić funkcję sortuj_spis i w wyszukiwaniu wg nazwisk wykorzystać fakt, że spis jest uporządkowany. */

#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define IMIE_MAX 10
#define NAZW_MAX 15
#define IL_OSOB 10000

typedef struct {
  char imie[IMIE_MAX+1];
  char nazwisko[NAZW_MAX+1];
  int pensja;
} osoba;

osoba spis[IL_OSOB];

//=======================================================

void  utworz_spis(void) {
  FILE* baza =
    fopen("/home/pracinf/stefan/public_html/Dydaktyka/JezProg/Slajdy/Labs05/baza_danych",
  "r");
  if (baza == NULL) printf("\n ZLE\n\n");
  for (int i=0; i<IL_OSOB; i++) {
    fscanf(baza, "%s", spis[i].imie);
    fscanf(baza, "%s", spis[i].nazwisko);
    fscanf(baza, "%i", &spis[i].pensja);
  }
  fclose(baza);
}

//=======================================================
int compare(const void *s1, const void *s2, void *arg)
  {
    osoba *o1 = (osoba *)s1;
    osoba *o2 = (osoba *)s2;
    int *n = (int *)arg;
    switch ( *n ) {
      case 1:
        return strcmp(o1 -> nazwisko, o2 -> nazwisko);
        break;
      case 2:
        return strcmp(o1 -> imie, o2 -> imie);
        break;
      case 3:
        if ( o1 -> pensja > o2 -> pensja) {
          return -1;
        }
        break;
      default:
      break;
    }
    return 2;
}
// powyzsza funkcja generuje bez instrukcji return 2; ostrzerzenie -Wreturn-type
//=======================================================
  /* sortuje  spis  alfabetycznie wg nazwisk,
     a w przypadku rownych nazwisk wg imion
  */
void  sortuj_spis() {
  int opcja;
  printf("Jak chcesz posortować spis? (1) nazwisko, (2) imie, (3) pensja : \n");
  scanf("%d",&opcja);
  qsort_r ( spis, IL_OSOB, sizeof(osoba), compare, &opcja);
}

//=======================================================

int  znajdz_nazwisko (
  char na[NAZW_MAX+1],
  char im[IMIE_MAX+1], int *p
) {
  /* do danego nazwiska  na  znajduje w spisie
     imie  im  oraz pensje  p
     jesli znajdzie, to zwraca 1, jesli nie, to 0
  */
  int i = 0;
  while (i < IL_OSOB && strcmp (spis[i].nazwisko,na) != 0 ) i++;
    if (i != IL_OSOB)
    {
      *p = spis[i].pensja;
      strcpy(im,spis[i].imie);
      return 1;
    }
    else return 0;
}
//=======================================================

int  znajdz_imie (
  char im[NAZW_MAX+1],
  char na[IMIE_MAX+1], int *p
) {
  /* do danego imienia  im  znajduje w spisie
     nazwisko  na  oraz pensje  p
     jesli znajdzie, to zwraca 1, jesli nie, to 0
  */
  int i = 0;
  while (i < IL_OSOB && strcmp (spis[i].imie,im) != 0 ) i++;
    if (i != IL_OSOB)
    {
      *p = spis[i].pensja;
      strcpy(na,spis[i].nazwisko);
      return 1;
    }
    else return 0;
}

//=======================================================

int main () {
  char odpowiedz, im[NAZW_MAX+1], na[IMIE_MAX+1];
  int p;

  utworz_spis(); //sortuj_spis();

  do {
    printf(
     "\n Znalezc wg imienia (I), nazwiska (N), czy zakonczyc (Q)? "
    );
    do { odpowiedz = getchar(); }
    while (isspace(odpowiedz));
    odpowiedz = tolower(odpowiedz);
    switch (odpowiedz) {
    case 'i' :
      printf("\n szukane imie: ");
      scanf("%s", im);
      if (znajdz_imie(im, na, &p))
        printf(" IMIE: %s, NAZWISKO: %s, PENSJA: %i\n", im, na, p);
      else  printf(" nie ma imienia %s\n", im);
      break;
    case 'n' :
      printf("\n szukane nazwisko: ");
      scanf("%s", na);
      if (znajdz_nazwisko(na, im, &p))
        printf(" IMIE: %s, NAZWISKO: %s, PENSJA: %i\n", im, na, p);
      else  printf(" nie ma nazwiska %s\n", na);
      break;
    case 'q' : break;
    default :
      printf(" Poprawne odpowiedzi: N, I, Q.\n");
    }
  }  while (tolower(odpowiedz) != 'q');

  printf("\n DZIEKUJE.\n\n");
  return 0;
