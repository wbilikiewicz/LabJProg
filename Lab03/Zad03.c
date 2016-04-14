#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	printf("FLT_MAX DO (int)FLT_MAX:\n %e DO %i \n", FLT_MAX, (int)FLT_MAX);
	// najbli¿szy floatowi max int
	printf("DBL_MAX DO (int)DBL_MAX:\n %e DO %i \n", DBL_MAX, (int)DBL_MAX);
	// najbli¿szy double max int
	printf("LDBL_MAX DO (double)LDBL_MAX:\n %Le DO %e \n", LDBL_MAX, (double)LDBL_MAX);
	// wynik = 'infinity'
  return 0;
}