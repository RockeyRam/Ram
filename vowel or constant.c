#include<stdio.h>
#include<conio.h>
void main()
{
  char a;
  clrscr();
  printf("\n Enter the vlue");
  scanf("%c",a);
  if(a==('a'||'A')||a==('e'||'E')||a==('i'||'I')||a==('O'||'o')||a==('u'||'U'))
  {
    printf("\n The given value is vowel);
   }
   else
   {
      printf("\n The given value is constant");
    }
    getch();
}
