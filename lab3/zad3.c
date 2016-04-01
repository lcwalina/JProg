#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
  short a=(short)LONG_MAX; // drukuje "-1" = błąd (short jest mniejszy niż long)
  a=(short)INT_MAX; // drukuje błąd (--||--)
  int b=(int)FLT_MAX; // drukuje maksimum dla typu float
  b=(int)DBL_MAX; // drukuje maksimum dla double
  //b=(int)SHRT_MAX; // drukuje maksimum dla short
  double c=(double)LDBL_MAX; // drukuje "inf"
  long double d=(long double)DBL_MAX; //drukuje maksimum dla double
  printf("%i\n%i\n%le\n%Le\n", a, b,c,d);
  return 0;
}
 
