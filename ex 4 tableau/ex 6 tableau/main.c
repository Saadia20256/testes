#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N ;
    printf("entrer la taille de tableau :");
    scanf("%d",&N);
    int T[N];
    for(int i =0;i<N;i++){
        scanf("%d",&T[i]);
    }
    int fact , r ;
    printf("entrer la fact :");
    scanf("%d",&fact);
    for(int i=0 ; i<N ;i++){
            r=fact *T[i];
        printf("les resultat :%d\n",r);
    }
    return 0;
}
