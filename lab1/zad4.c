//Co wydrukuje następujący fragment programu?

#include <stdio.h>
int main()
{
  int a, b;
  a=2; b=4;
  if ((a=2) & (b=4))   printf(" TAK\n");
  else   printf(" NIE\n");
  return 0;
}

//drukuje "NIE"
