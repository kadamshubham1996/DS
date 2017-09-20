#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1=10;
    int *ptr1,**ptr2;
    ptr1=&num1;
    ptr2=&ptr1;
    printf("%u/n",&num1);
    printf("%d/n",*ptr1);
    return 0;
}
