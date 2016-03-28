#include <stdio.h>

int key(int n)
{
  return -n;
}

int pack(int buf[4])
{
  int i, pack=0;
  for (i=0; i<4; i++)
    pack = (pack<<8)|(buf[i]&255);
  return pack;
}
int main()
{
  int buf[4];
  int i, sheep=0;

  do{
    buf[sheep]=(int)getchar();
    sheep++;
    if(sheep==4){
    printf("%d\n", key(pack(buf)));
    sheep=0;
    }

  } while(buf[sheep]!=EOF);

}
