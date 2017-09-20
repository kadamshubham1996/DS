#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int arr[]={1,2,3,4,5};
    int *ptr;
    ptr = &arr[0];
   while(i<=4){
   //printf("%d\n",*ptr);

   printf("%d\n",*ptr);
   *ptr++;
   i++;
   }

    return 0;
}
