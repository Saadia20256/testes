#include<stdio.h>
#include<stdlib.h>

int main () {
    int n , s ;
    printf("entrer un nombre entier positif :");
    scanf ("%d",&n);
    int somme = 1;
    for(int i = 1 ; i<=n ;i++){
      somme += i ;
    }

    printf("la somme des %d premier nombre naturel :%d \n", n , s);
    return 0 ;
}
