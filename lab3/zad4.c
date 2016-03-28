#include <stdio.h>

int main()
{
  float x;
  x = 1.0;
    while (1.0+x > 1.0)
      x = x/2.0;

  double y;
  y = 1.0;
    while (1.0+y > 1.0)
      y = y/2.0;


  long double z;
  z = 1.0;
    while (1.0+z > 1.0)
      z = z/2.0;

  printf("%e\n%le\n%Le\n", x,y,z); // eksperymentalnie otrzymane wartości ziarna różnią się od wartości stałych "ziaren" poszczególnych typów
  return 0;
}
