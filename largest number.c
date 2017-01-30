#include<stdio.h>
int main()
{
  int a[3],i,j;
  printf("\nEnter the value");
  scanf("%d",&a);
  fot(i=0;i<3;i++)
  {
    scanf("%d",a[i]);
  }
  for(i=0;i<3;i++)
   for(j=1;j<2;j++)
   {
    if(a[i]<a[j])
    {
      int t;
      t=a[i];
      a[i]=a[j];
      a[j]=t;
      }
     }
      printf("\n The greatest number is %d",a[i]);
      retur 0;
 }  
