#include<stdio.h>
#include<stdlib.h>

int main () {
   char nom [20];
   char prenom [20];
   int age [20];
   char sex [20];
   char adressemail [30];
   printf("entrer nom :");
   scanf("%s",&nom);
   printf("entrer prenom :");
   scanf("%s",&prenom);
   printf("entrer age :");
   scanf("%d",&age);
   printf("entrer sex :");
   scanf("%s",&sex);
   printf("entrer adressemail :");
   scanf("%s",&adressemail);
   printf("les information dde presone :\n");
   printf("nom est :%s \n");
   printf("prenom est :%s \n");
   printf("age est :%d \n");
   printf("sex est :%s \n");
   printf("adressemail est : %s \n");

   return 0 ;
}
