#include<stdio.h>
int sumd(int);
int main()
{
  int n,s;
  printf("\nEnter num:");
  scanf("%d",&n);
  s=sumd(n);
  printf("\nSum of digits:%d \n",s);
  
  return 0;
}
int sumd(int num)
{
  int s;
  if(num>0)
  s=(num%0)+sumd(num/10);

  return s;
}
  

