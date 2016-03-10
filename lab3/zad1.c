#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
  printf("|        TYP|             MINIMUM|            MAKSIMUM|      \"ZIARNO\"|     \"PRECYZJA\"|WE/WY|\n");
  printf("|-----------|--------------------|--------------------|--------------|---------------|-----|\n");
  printf("|      short|%20i|%20i|              |               | %%i  |\n", SHRT_MIN, SHRT_MAX);
  printf("|        int|%20i|%20i|              |               | %%i  |\n", INT_MIN, INT_MAX);
  printf("|       long|%20li|%20li|              |               | %%li |\n", LONG_MIN, LONG_MAX);
  printf("|  long long|%20lli|%20lli|              |               | %%lli|\n", LLONG_MIN, LLONG_MAX);
  printf("|      float|%20e|%20e| %e |%15i| %%e  |\n", FLT_MIN, FLT_MAX, FLT_EPSILON, FLT_DIG);
  printf("|     double|%20le|%20le| %le |%15i| %%le |\n", DBL_MIN, DBL_MAX, DBL_EPSILON, DBL_DIG);
  printf("|long double|%20Le|%20Le| %Le |%15i| %%Le |\n", LDBL_MIN, LDBL_MAX, LDBL_EPSILON, LDBL_DIG);

  return 0;
}
