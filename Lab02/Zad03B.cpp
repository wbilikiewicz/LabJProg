// Program szyfruj¹cy oraz wspó³pracuj¹cy z nim program odszyfrowuj¹cy,
// dzia³aj¹ce w nastêpuj¹cy sposób:
//
// wczytany tekst jest dzielony na grupy po 4 kolejne znaki; ka¿da
// taka grupa szyfrowana jest oddzielnie;
// tak¹ grupê traktuje siê jak pojedyncz¹ liczbê ca³kowit¹;
// poddaje siê j¹ jakiejœ ró¿nowartoœciowej funkcji matematycznej :
// n › -n     albo
// n › (n+k) % 232   gdzie k jest ustalon¹ liczb¹ ca³kowit¹;
// otrzymany ci¹g liczb przesy³a siê adresatowi;
// ka¿d¹ otrzyman¹ liczbê adresat odszyfrowuje funkcj¹ odwrotn¹ do klucza,
// a nastêpnie rozbija na 4 znaki; te znaki drukuje.


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
