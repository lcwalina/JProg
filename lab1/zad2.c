//Napisać ,,czysty'' program, czyli bez efektów ubocznych, działający tak samo jak powyższa pętla for.

#include<stdio.h>

int main()
{

   char a=getchar();
   while (a!=EOF);
   {
	 printf("%c", a);
	 a = getchar();
   }
   return 0;
}
