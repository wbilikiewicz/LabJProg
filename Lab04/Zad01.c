/* Opracować zestaw operacji na liczbach zespolonych potrzebny do prawidłowego działania tego programu. W tym celu należy prototypy (nagłówki) podanych tam funkcji, realizujących działania, zastąpić lub uzupełnić pełnymi definicjami działań.
Oczywiście dla napisania tych funkcji, potrzebne jest zastosowanie własnej wiedzy o liczbach zespolonych (np. z algebry).*/

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
zespol euler(){
    zespol z;
    z.rea = cos(M_PI);
    z.ima = sin(M_PI);
    return z;
}
zespol jedynka(){
	zespol jeden;
	jeden.rea = 1;
	jeden.ima = 0;
	return jeden;
}
zespol zero(){
	zespol zero;
	zero.rea = 0;
	zero.ima = 0;
	return zero;
}
zespol zesp_exp(zespol z){
	zespol suma = zero();
	zespol skl = jedynka();
	int i;
	for(i=1;i<1000000;i++){
		suma = zesp_dodac(suma,skl);
		skl = zesp_dziel(zesp_razy(skl,z),i);
	}
	return suma;
}

int main () {
  zespol  z1, z2;
  zespol leuler = euler();
  zespol ljedynka = jedynka();
  zespol lew_str = zesp_dodac(zesp_exp(pi_i),ljedynka); 
  printf("\n z1 == "); z1 = zesp_get();
  printf(" z2 == "); z2 = zesp_get();
  printf("\n z1+z2 == "); zesp_print(zesp_dodac(z1, z2));
  printf("\n z1-z2 == "); zesp_print(zesp_odjac(z1, z2));
  printf("\n z1*z2 == "); zesp_print(zesp_razy(z1, z2));
  printf("\n z1 == "); zesp_print(zesp_sprzez(z1));
  printf("\n |z1+z2| == %.4lf\n\n", zesp_abs(zesp_dodac(z1, z2)));
  printf("Tozsamosc Eulera: \n");
  zesp_print(leuler);
  printf(" + ");
  zesp_print(ljedynka);
  printf(" = ");
  zesp_print(zesp_dodac(leuler, ljedynka));
  printf("\n");
  zesp_print(zesp_exp(leuler));
  printf("\n");
  zesp_print(lew_str);
  printf("\n");
}
