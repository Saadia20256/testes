#include <stdio.h>
#include <stdlib.h>

int main (){
    int N ,S=0 ;
    printf("entrer la taille de tableau :");
    scanf ("%d",&N);
    int T[N];
    printf("entrer chaque element \n");
    for (int i=0 ; i<N ;i++){

        scanf("%d",&T[i]);
        S=S+T[i] ;
    }
     printf("la somme total des element est : %d",S);
   return 0;

}
