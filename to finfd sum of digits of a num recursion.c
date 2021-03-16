# include<stdio.h>

int sumdig(int n)
{
    int s=0;
    if(n==0)
        return 0;
    else
    s=n%10+sumdig(n/10);

    return s;





}






int main()
{
  int n,s;
 printf("enter n");
scanf("%d",&n);
s=sumdig(n)  ;
printf("%d",s);

}
