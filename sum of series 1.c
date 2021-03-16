// series=1+1/2+1/3+1/4....

# include<stdio.h>
float sumseries(int n)
{
float s;
if(n==0)
    return 0;
else
s=1/n+sumseries(n-1);
return s;
}







int main()
{
int n;
float s;
printf("enter n");
scanf("%d",&n);
s=sumseries(n);
printf("%f",s);

}


