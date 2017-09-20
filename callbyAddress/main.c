#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1=10;
    int num2=20;
    printf("%d\n",&num1);
    printf("%d\n",&num2);
    swap(&num1,&num2);
    printf("Hello world!\n%d %d",num1,num2);

    return 0;
}
void swap(int *n1 ,int *n2){
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
    printf("num1=\n%d",*n1);
    printf("num2=\n%d",*n2);

}
