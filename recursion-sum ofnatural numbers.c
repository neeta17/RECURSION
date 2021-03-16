# include<stdio.h>

int sum(int n)
{
  int s=0;
  if(n==0)
     return 0;
 else
    {
        s=n+sum(n-1);
        printf("\n%d\n",n);
    }
    return s;



}










int main()
{int n,s;
printf("enter n");
scanf("%d",&n);
s=sum(n);
printf("%d",s);
return 0;


}
