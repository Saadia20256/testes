#include<stdio.h>
#include<stdlib.h>

int main (){
   int n ;
   printf("entrer un valeur de n :");
   scanf("%d" , &n);

   printf("%nombre premiers de 1 :\n", n);

   for(int i = 2 ; i<=n ; i++ ){
        int premier = 1 ; //en poose i est premiers
   }
   for(int j = 2 ; j*j<=i ; j++){
      if(i%j==0){
        premier = 0 ; //n'est pas un nombre premier
        break ;
      }
   }
   if(premier){
    printf("%d",i) ;
   }
   printf("\n");

   return 0 ;
}
