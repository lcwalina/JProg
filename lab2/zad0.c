#include <stdio.h>
int main()
{
  int a=5&3,b=5|3,c=7<<2&7,d=7<<(2&7),e=((-1)<<8)>>16,f=13^9;
  //     1     7     4         28           -1          4
  printf("%3d\n%3d\n%3d\n%3d\n%3d\n%3d\n",a,b,c,d,e,f);
  return 0;
}
