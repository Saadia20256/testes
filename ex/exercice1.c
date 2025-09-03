#include <stdio.h>
#include <stdlib.h>

int main()
{
   int age;
   char name[20];
   int sex;
   char email[100];


   printf("enter age:");

   scanf("%d" , &age );



   printf("1 for male ; 2 for female :");

   scanf("%d" , &sex);


   printf("enter name :");

   scanf("%s" , &name);


   printf("enter email:");
   scanf("%s" , email);

   printf("this is your information :\n");
   printf("you are %s\n" , name);
    printf("you are %d years old\n" , age);
    if(sex == 1){
       printf("your male\n");

   }
   else{
       printf("your female\n");
   }

   printf("and ur email is%s\n" ,email);

    return 0;
}
