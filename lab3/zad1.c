#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
  printf("|        TYP|             MINIMUM|            MAKSIMUM|      \"ZIARNO\"|     \"PRECYZJA\"|WE/WY|ROZMIAR|\n");
  printf("|-----------|--------------------|--------------------|--------------|---------------|-----|-------|\n");
  printf("|      short|%20i|%20i|              |               | %%i  |%7lu|\n", SHRT_MIN, SHRT_MAX,sizeof(short));
  printf("|        int|%20i|%20i|              |               | %%i  |%7lu|\n", INT_MIN, INT_MAX,sizeof(int));
  printf("|       long|%20li|%20li|              |               | %%li |%7lu|\n", LONG_MIN, LONG_MAX,sizeof(long));
  printf("|  long long|%20lli|%20lli|              |               | %%lli|%7lu|\n", LLONG_MIN, LLONG_MAX,sizeof(long long));
  printf("|      float|%20e|%20e| %e |%15i| %%e  |%7lu|\n", FLT_MIN, FLT_MAX, FLT_EPSILON, FLT_DIG,sizeof(float));
  printf("|     double|%20le|%20le| %le |%15i| %%le |%7lu|\n", DBL_MIN, DBL_MAX, DBL_EPSILON, DBL_DIG,sizeof(double));
  printf("|long double|%20Le|%20Le| %Le |%15i| %%Le |%7lu|\n", LDBL_MIN, LDBL_MAX, LDBL_EPSILON, LDBL_DIG,sizeof(long double));

  return 0;
}
