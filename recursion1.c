#include<stdio.h>
void display (int);
int main()
{
   display(100);
  
   return 0;
}

void display(int n)
{
  if(n>1)
  display(n-1);
  
  printf("%d ",n);
}

