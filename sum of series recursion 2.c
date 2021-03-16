# include<stdio.h>

int sum(int n)
{
int s=0;
if(n==0)
return 0;
s=n*n+sum(n-1);
printf("\n step sum:%d",s);
return s;
}
int main()
{
int n,s;
printf("enter n");
scanf("%d",&n);
s=sum(n);
printf("\n total sum of series:%d",s);

}
