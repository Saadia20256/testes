#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N ;
    printf("entrer un taille de tableau :");
    scanf("%d",&N);
    int T[N];
    printf("entrer les element de tableau :\n");
    for(int i=0 ; i<N ; i++){
        scanf("%d",&T[i]);
    }
    for(int i=0 ; i<N-1 ;i++) {
        for(int j=0 ;j<N-i-1;j++){
            if(T[i]>T[j+1]){
                int temp = T[j];
                T[j]=T[j+1];
                T[j+1]=temp ;
            }
        }
    }
    printf("tableau trie en ordre croissant :\n");
    for(int i=0 ; i<N ; i++){
        printf("%d",T[i]);
    }
    return 0;
}
