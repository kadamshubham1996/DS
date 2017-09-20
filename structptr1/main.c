#include <stdio.h>
#include <stdlib.h>
void changeptr(int **);
 int main()
{
   int num=10;
   int *ptr;
   ptr=&num;
   printf("%d",*ptr);
   changeptr(&ptr);
   printf("%d",*ptr);
    return 0;
}
void changeptr(int **p)
  {
   int num2=20;
   *p=&num2;
   }
