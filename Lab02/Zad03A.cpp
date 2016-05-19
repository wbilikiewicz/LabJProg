// Program szyfruj¹cy oraz wspó³pracuj¹cy z nim program odszyfrowuj¹cy,
// dzia³aj¹ce w nastêpuj¹cy sposób:
// wczytany tekst jest dzielony na grupy po 4 kolejne znaki; ka¿da
// taka grupa szyfrowana jest oddzielnie;
// tak¹ grupê traktuje siê jak pojedyncz¹ liczbê ca³kowit¹;
// poddaje siê j¹ jakiejœ ró¿nowartoœciowej funkcji matematycznej :
// n › -n     albo
// n › (n+k) % 232   gdzie k jest ustalon¹ liczb¹ ca³kowit¹;
// otrzymany ci¹g liczb przesy³a siê adresatowi;
// ka¿d¹ otrzyman¹ liczbê adresat odszyfrowuje funkcj¹ odwrotn¹ do klucza,
// a nastêpnie rozbija na 4 znaki; te znaki drukuje.

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
