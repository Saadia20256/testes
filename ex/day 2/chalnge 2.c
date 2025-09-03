#include<stdio.h>
#include<stdlib.h>

int main () {
   int n , i ;
   printf("entrer un nombre entier positif : ");
   scanf("%d",&n);
   if(n<0) {
    printf("erur : la factorielle n'est pas definie pour les nombres negatifs .\n");

   }else {
       for (i =1 ; i<=10 ;i++){
          factorielle*= i;
         {

        printf("%d! = %llu",n,factorielle);
          }
       }

       return 0 ;
   }
