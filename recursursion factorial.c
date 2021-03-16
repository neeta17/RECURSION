#include<stdio.h>
int facto(int i)
{  int fact=1;
   fact=i*1 ;
   return fact;
}
int main()
{
    int fact;
   int i;
   for(i=5;i>=1;i--)
   {
   fact=facto(i);
    fact=fact*1;
   }
printf("%d",fact);
}











































