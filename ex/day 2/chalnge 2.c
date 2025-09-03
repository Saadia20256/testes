#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    long long factorielle = 1;

    printf("Entrer un nombre entier positif : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erreur : la factorielle n'est pas définie pour les nombres négatifs.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorielle *= i;
        }
        printf("%d! = %lld\n", n, factorielle);
    }

    return 0;
}
