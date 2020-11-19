#include<stdio.h>
int fact(int);
int main()
{
  int n,f;
  printf("Enter num:");
  scanf("%d",&n);

  f=fact(n);
  printf("\nFactorial of%d:%d\n",n,f);

  return 0;
}

int fact(int n)
{
  if(n>1)
  n=n*fact(n-1);

  return n;
}

