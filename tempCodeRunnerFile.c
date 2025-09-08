#include <stdio.h>
#include <stdlib.h>

int main() {
    int taille;
    int tableau[100];  // Déclaration du tableau avec taille maximale

    printf("Entrer nombre des éléments du tableau (max 100) : ");
    scanf("%d", &taille);  // Correction : ajouter une virgule entre format et variable

    if (taille > 100 || taille <= 0) {
        printf("Taille invalide.\n");
        return 1;
    }

    for (int i = 0; i < taille; i++) {
        printf("Entrez l'élément %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("Contenu du tableau :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d\n", tableau[i]);
    }

    return 0;
}
