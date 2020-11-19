#include<stdio.h>
void display (int);
int main()
{
   display(1);
  
   return 0;
}

void display(int n)
{
  if(n<100)
  display(n+1);
  
  printf("%d ",n);
}


