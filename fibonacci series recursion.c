# include <stdio.h>
   void fibseries(int f1,int f2,int n)
   {  int f3;
        if(n==0)
       return 2;
       f3=f1+f2;
       printf("%d",f3);
       fibseries(f2,f3,n-1);

   }
  int main()
  {int n;
  printf("enter n");
  scanf("%d",&n);
  fibseries(-1,1,n);
  return 0;
  }
