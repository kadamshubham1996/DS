#include <stdio.h>
#include <string.h>

int main()
{
  int a=10,b=5,c;
  int *p=&a,*q=&b;
  c=p-q;
  printf("%d",c);
  return 0;
}
