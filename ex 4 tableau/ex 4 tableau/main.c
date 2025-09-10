#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N ;
    printf("donne la taille de tableau :");
    scanf("%d",&N);
    printf("entrer les element de tableau :");
    int T[N] ;
    for (int i = 0; i <N; i++){
    scanf("%d",&T[i]);
    }
    int max =T[0] ;
     for (int i = 1; i < N; i++) {
        if (T[i] > max) {
            max = T[i];

     }
        }
    printf("le max est :%d\n",max);
    return 0;
}
