// dla liczb całkowitych
#include <stdio.h>

int main()
{
  short Short=1/2;
  float Float=0.000000001+0.000000001;
  printf("%i\n", Short); // drukuje "0",  wszystkie typy całkowite - analogicznie
  printf("%f\n", Float); // drukuje "0", typy zmiennoprzecinkowe analogicznie - powyżej precyzji danego typu
  return 0;

}
