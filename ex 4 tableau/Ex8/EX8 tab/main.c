#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N ;
    printf("entrer le taille de tableau :");
    scanf("%d",&N);
    int T1[N] , T2[N];
    printf("entrer les element de tableau :");
    for(int i=0 ;i<N ;i++){
     scanf("%d",&T1[N]);
    }
    for(int i=0 ;i<N ;i++){
        T2[i]=T1[i];
    }
    printf("tableau 1:");
    for(int i=0 ;i<N ;i++){
        scanf("%d",&T1[i]);
    }
    printf("\n tableau2(copie) :");
    for(int i=0 ;i<N ;i++){
        scanf("%d",&T2[i]);
    }
    return 0;
}
