#include<math.h>
#include<ctype.h>
#include<stdlib.h>

/****************************************************************/
// DEFINICJA TYPU LICZB ZESPOLONYCH:

typedef struct {
  double rea, ima;
}  zespol;

/****************************************************************/
// POMOCNICZE:

void  err(char s[]) {  // -- sygnalizacja bledu wejscia
  printf("\n !!! FUNKCJA zesp_get: %s !!!\n\n", s);
  exit(1);
}

/****************************************************************/
// INICJALIZACJE oraz WEJSCIE-WYJSCIE:

zespol  zesp_zestawic (double r, double i) {
    // zestawienie liczby zespolonej z dwoch rzeczywistych
  zespol z;
  z.rea = r;  z.ima = i;
  return z;
}

zespol  zesp_get (void) {
    /* wczytanie liczby zespolonej; powinna skladac sie z dwoch
       rzeczywistych, oraz plusa lub minusa miedzy nimi, zaczynac sie od
       nawiasu otwierajacego, konczyc sie litera ,,i'' oraz nawiasem
       zamykajacym;
       np.  (123.45 + 67.89i)
    */
  char ch;  zespol z;  int znak_im;
  do { ch = getchar(); } while (isspace(ch));
  if (ch == '(') {
    if (scanf("%lf", &(z.rea)) == 1) {
      do { ch = getchar(); } while (isspace(ch));
      if (ch == '+' || ch == '-') {
        if (ch == '+')  znak_im = 1;
        else  znak_im = -1;
        if (scanf("%lf", &(z.ima)) == 1) {
          do { ch = getchar(); } while (isspace(ch));
          if (ch == 'i') {
            do { ch = getchar(); } while (isspace(ch));
            if (ch == ')') {
              if (znak_im == -1)  z.ima = -z.ima;
            } else err("brak koncowego nawiasu");
          } else err("brak 'i' na koncu czesci urojonej");
        } else err("niepoprawna czesc urojona");
      } else err("po czesci rzeczywistej brak znaku '+' lub '-'");
    } else err("niepoprawna czesc rzeczywista");
  } else err("brak rozpoczynajacego nawiasu");
  return z;
}
void  zesp_print (zespol z) { // drukowanie liczby zespolonej
  if (z.ima >= 0)
    printf("(%.2lf+%.2lfi)", z.rea, z.ima);
  else
    printf("(%.2lf-%.2lfi)", z.rea, -z.ima);
}

/****************************************************************/
// DZIALANIA:

zespol  zesp_dodac (zespol z1, zespol z2){
  zespol z;
  z.rea = z1.rea + z2.rea;
  z.ima = z1.ima + z2.ima;
  return z;
}
zespol  zesp_odjac (zespol z1, zespol z2){
  zespol z;
  z.rea = z1.rea - z2.rea;
  z.ima = z1.ima - z2.ima;
  return z;
}
zespol  zesp_razy (zespol z1, zespol z2){
  zespol z;
  z.rea = z1.rea * z2.rea - z1.ima * z2.ima;
  z.ima = z1.rea * z2.ima + z1.ima * z2.rea;
  return z;
}
zespol  zesp_sprzez (zespol zz){
  zespol z;
  z.rea = zz.rea;
  z.ima = -zz.ima;
  return z;
}
double  zesp_abs (zespol zz){
  double modul;
  modul = sqrt(zz.rea * zz.rea + zz.ima * zz.ima);
  return modul;
}
 zespol e_do_urojonej (double r){
   zespol z;
   z.rea = cos(r);
   z.ima = sin(r);
   return z;
 }
void zesp(zespol z){
	double e;
  e = 2,71828182;
  double pom;
  pom = cos(M_PI );
  

  double temp;
  temp = pom +1;
  printf(" \n pom %lf",temp);
  if (temp==0)
  printf("\n Zgadza sie");
  else
  printf("\nNie zgadza si�");
  
	
} 
 /****************************************************************/


int main () {
  zespol  z1, z2;
  double r;
  printf("\n z1 == "); z1 = zesp_get();
  printf(" z2 == "); z2 = zesp_get();
  printf("\n z1+z2 == "); zesp_print(zesp_dodac(z1, z2));
  printf("\n z1-z2 == "); zesp_print(zesp_odjac(z1, z2));
  printf("\n z1*z2 == "); zesp_print(zesp_razy(z1, z2));
  printf("\n |z1+z2| == %.4lf\n\n", zesp_abs(zesp_dodac(z1, z2)));
  scanf("%lf", &r);
  printf("\n exp(%lf*i) == ", r); zesp_print(e_do_urojonej(z1));
  zesp(z1);
  return 0;
}
