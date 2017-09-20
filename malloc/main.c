#include <stdio.h>
#include <stdlib.h>
struct student{
   int roll;
   char name[20];
};
void insert(struct student **s1);
int main()
{
  struct student *s = (struct student *)malloc(sizeof(struct student));
   s->roll=30;
   strcpy(s->name,"shubham");
   printf("%d%s\n",s->roll,s->name);
   insert(&s);
   printf("%d%s\n",s->roll,s->name);
   return 0;

}
void insert(struct student **s1){
     *s1=(struct student *)malloc(sizeof(struct student));
    (*s1)->roll=20;
    strcpy((*s1)->name,"Gopal");

}
