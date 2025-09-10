#include <stdio.h>
#include <stdlib.h>

int main() {
    int taille;


    printf("Entrer nombre des éléments du tableau (max 100) : ");
    scanf("%d", &taille);
    int tableau[taille];

    for (int i = 0; i < taille; i++) {
        printf("Entrez l'élément %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("Contenu du tableau :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d\n", tableau[i]);
    }
    if(taille<=0){
        printf("le nnombre des element doit etre superieur a 0");
    }

    return 0;
}
