#include<stdio.h>
int main()
{
  int a;
  printf("\n Enter the number");
  scanf("%d",&a);
  if(a>0)
  {
    printf("\n The given number is Possitive");
  }
  else if(a<0)
  {
    printf("\n The given number is negative");
   }
  else if(a==0)
  {
    printf("\n The given number is Zero");
  }
 }