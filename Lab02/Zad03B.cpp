// Program szyfruj�cy oraz wsp�pracuj�cy z nim program odszyfrowuj�cy,
// dzia�aj�ce w nast�puj�cy spos�b:
//
// wczytany tekst jest dzielony na grupy po 4 kolejne znaki; ka�da
// taka grupa szyfrowana jest oddzielnie;
// tak� grup� traktuje si� jak pojedyncz� liczb� ca�kowit�;
// poddaje si� j� jakiej� r�nowarto�ciowej funkcji matematycznej :
// n � -n     albo
// n � (n+k) % 232   gdzie k jest ustalon� liczb� ca�kowit�;
// otrzymany ci�g liczb przesy�a si� adresatowi;
// ka�d� otrzyman� liczb� adresat odszyfrowuje funkcj� odwrotn� do klucza,
// a nast�pnie rozbija na 4 znaki; te znaki drukuje.


#include<stdio.h>

int decrypt(int n) {
  return -n;
}

void print_ch(int n) {
  int buffer[4];
  for ( int i = 0; i < 4; ++i) {
    buffer[i] = n & 255;
    n >>= 8;
  }
  for ( int i = 3 ; i >= 0; ++i)
    printf("%c", (char)buffer[i]);
}

int main () {
  int n, read;
  read = scanf("%i", &n);
  while ( read == 1 ) {
    print_ch(decrypt(n));
    read = scanf("%i", &n);
  }
}
