#include<stdio.h>
#include<stdlib.h>

int main (){
    int n , somme = 0 ;
    printf("entrer un nombre n:");
    scanf("%d" , &n);
      //somme avec un boucle
    for(int i=1 ; i<=n ; i++){
         somme += i ;
    }
     //somme avec la formule
    int formule = n*(n+1)/2;

    printf("somme calcule avec boucle :%\n",somme);
    printf("Somme selon la formule n(n+1)/2 : %d\n", formule);

   return 0 ;

}
