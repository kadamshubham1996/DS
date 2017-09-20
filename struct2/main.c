
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student{

int rollno;
char name[20];
};
void changestruct(struct student *);
int main()
{
    struct student s1;
    s1.rollno=20;
    strcpy(s1.name,"shubham");
    printf("%d,%s",s1.rollno,s1.name);
    changestruct(&s1);
    printf("%d,%s",s1.rollno,s1.name);
}
 void changestruct(struct student *s)
    {
     s->rollno=39;
     strcpy(s->name,"vishal");
     }



