#include<stdio.h>
int main()
{
  char aa;
  printf("\n Enter the value");
  scanf("%c",&aa);
  if(aa=='a'||'A'||'e'||'I'||'i'||'o'||'O'||'u'||'U')
  {
    printf("\n The given value is vowel");
   }
   else
   {
      printf("\n The given value is constant");
   }
    return 0;
}
