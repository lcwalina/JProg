#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
  short a=(short)LONG_MAX; // "-1"
  int b=(int)FLT_MAX; // "duża liczba"
  double c=(double)LDBL_MAX; // "inf"
  printf("%i\n%i\n%le\n", a, b,c);
  return 0;
}
