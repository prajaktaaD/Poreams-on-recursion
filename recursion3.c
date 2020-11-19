#include<stdio.h>
int add();
int main()
{
  int sum;
  add(10);
  printf("\nsum:%d\n",sum);

  return 0;
}

int add(int n)
{
  if(n>1)
  n=n+add(n-1);

  return n;
}

