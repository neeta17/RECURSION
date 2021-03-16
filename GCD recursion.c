# include <stdio.h>
# include <math.h>
int GCD(int a,int b)
{int c,x;
c=a%b;
 if( c==0)
    return b;
  x=GCD(b,c);
return x;

}








int main()
  {int  a, b,c;
  printf("enter  a b");
  scanf("%d %d",&a,&b);
  c=GCD(a,b);
  printf("%d",c);
  return 0;
  }
