# include <stdio.h>
int fibsnth(int n)
{
    int f;
    if(n==1 || n==2)
    return 1;
    if(n==0)
        return 0;
    f=fibsnth(n-1)+fibsnth(n-2);
    return f;

}

int main()
  {int n,s;
  printf("enter n");
  scanf("%d",&n);
  s=fibsnth(n);
  printf("%d",s);
  return 0;
  }
