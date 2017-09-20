
#include<stdio.h>
#include<conio.h>
struct student{
int rollno;
char name[20];
};
//void changeptr(int *);
int main()
{
    struct student s1;
    s1.rollno=20;
    strcpy(s1.name,"shubham");
    printf("%d,%s",s1.rollno,s1.name);
   // changestruct(&s1);
    printf("%d,%s",s1.rollno,s1.name);
}
/*void changestruct(struct student *s){
     *s.rollno=30;
     strcpy(*s.name,"gopal");
     }
*/
