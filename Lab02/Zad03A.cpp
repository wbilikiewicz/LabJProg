// Program szyfruj�cy oraz wsp�pracuj�cy z nim program odszyfrowuj�cy,
// dzia�aj�ce w nast�puj�cy spos�b:
// wczytany tekst jest dzielony na grupy po 4 kolejne znaki; ka�da
// taka grupa szyfrowana jest oddzielnie;
// tak� grup� traktuje si� jak pojedyncz� liczb� ca�kowit�;
// poddaje si� j� jakiej� r�nowarto�ciowej funkcji matematycznej :
// n � -n     albo
// n � (n+k) % 232   gdzie k jest ustalon� liczb� ca�kowit�;
// otrzymany ci�g liczb przesy�a si� adresatowi;
// ka�d� otrzyman� liczb� adresat odszyfrowuje funkcj� odwrotn� do klucza,
// a nast�pnie rozbija na 4 znaki; te znaki drukuje.

#include <stdio.h>

int encrypt ( int n ) {
    return -n;
}

int char_to_digit ( int buffer[4] ) {
  int x = 0;
  for ( int i = 0; i < 4; ++i )
    x = ( x << 8 ) | ( buffer[i] & 255 );
  return x;
}

int main () {
  int h_many = 0;
  int buffer[4];
  buffer[h_many] = (int)getchar();
  while (buffer[h_many] != EOF) {
    ++h_many;
    if ( h_many == 4 ) {
      printf(" %11i\n", encrypt(char_to_digit(buffer)));
      h_many = 0;
    }
    buffer[h_many] = (int)getchar();
  }

  if ( h_many > 0 ) {
     for( int  i = h_many; i < 4; ++i) buffer[i] = ' ';
     printf(" %10i\n",encrypt(char_to_digit(buffer)));
  }
}
