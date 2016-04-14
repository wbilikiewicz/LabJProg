#include <stdio.h>

int main ()
{
  FILE *fp;
  char znak;
  int c = 0;
  int k, i;
  fp = fopen("bity2.abw", "r");
  while (znak != EOF)
  {
    znak = fgetc(fp);
    c = (int) znak;
    printf ("%c%d", znak, c);
    for (i = 7; i >= 0; i--)
    {
      k = c >> i;
      if(k&1)
      {
        printf ("1");
      }
      else
      {
        printf ("0");
      }
    }
  }
  return 0;
}
