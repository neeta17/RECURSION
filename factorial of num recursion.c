# include<stdio.h>

int fact(int n)
{
 int f;
 if(n==0)
    return 1;
 f=n*fact(n-1);
 return f;

}

int main()
{int n,f;
printf("enter n");
scanf("%d",&n);
f=fact(n);
printf("%d",f);
}
