# include<stdio.h>

 char checkpalindrome(char str1[],char str2[])
{ if(*str2==NULL)
  return str1;

  str1=checkpalindrome(str1,(str2+1));

  if( str1!=NULL && str1<str2)

  {
  if((*str1)==(*str2))
  return(str1+1);

  else

  return 0;
  }

else
    return str1;



}

int palindrome(char str[])
{

  if(checkpalindrome(str,str))
    printf(" it is a palindrome ");
  else
    printf("it is not a palindrome");



}

int main()
{
 char str[100];
 printf("\nenter string");
 scanf("%s",str);
 palindrome(str);
 printf("%s",str);

 return;

}



