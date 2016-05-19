#include <stdio.h>
#define ILE_BITOW 8
int pot2[ILE_BITOW];
void pot2_inic()
{
  int i;
  pot2[0]=1;
  for(i = 1; i < ILE_BITOW; i++)
  pot2[i] = pot2[i-1]*2;
}
int bit(int numer, char znak)
{
  if ((znak & pot2[numer]) == 0)
  return 0;
  else return 1;
}
int main()
{
  char c;
  int i;
  pot2_inic();
  scanf("%c", &c);
  while (c != EOF)
  {
    for (i = 7; i >= 0; i--)
    {
      printf ("%i", bit(i,c));
    }
    printf ("\n");
    scanf("%c", &c);
  }
}
