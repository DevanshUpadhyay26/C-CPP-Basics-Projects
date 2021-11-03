#include <stdio.h>
#include <stdlib.h>
int main()
{
    char color[20];
    char name[20];
    char activity[8];
   printf("WELCOME\n");
   printf("Enter the first word\n");
   scanf("%s",color);
   printf("Enter the second word\n");
   scanf("%s",name);
   printf("Enter the third word\n");
   scanf("%s",activity);
   


    printf("His name is %s\n",color);
    printf("His age is %s\n",name);
    printf("He likes to %s\n",activity);



    return 0;
}
