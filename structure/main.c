#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct student{
    int rollno;
    char name[20];
    float per;
    };
    struct student s1;
    printf("Enter rollNO,Name,Percentage");
    scanf("%d%s%f",&s1.rollno,s1.name,&s1.per);

    printf("RollNo,name,Percentage is");
    printf("%d%s%f",s1.rollno,s1.name,s1.per);

    printf("Hello world!\n");
return 0;
}
