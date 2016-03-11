#include <stdio.h>

int main()
{
  short a=0.1,a2=0.1;
  int b=0.1,b2=0.1; //analogicznie do powyższego
  long  c=0.1,c2=0.1; // --||--
  long long d=0.1, d2=0.1; // --||--
  float e=0.0000001, e2=0.0000001;
  double f;
  long double g;
  printf("%i\n", a+a2);
  printf("%f\n", e+e2);

  return 0;

}
