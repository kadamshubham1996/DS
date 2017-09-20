#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1=10;
    int num2=20;
    printf("%d\n",&num1);
    printf("%d\n",&num2);
    swap(num1,num2);

    printf("Hello world!\n%d %d",num1,num2);

    return 0;
}
void swap(int num1,int num2){
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    printf("num1=\n%d",num1);
    printf("num2=\n%d",num2);
}


