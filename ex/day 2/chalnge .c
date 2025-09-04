#include<stdio.h>
#include<stdlib.h>

int main () {
    int nombre ;
    printf("entrer un nombre pour afichie pour cette table du multplication :");
    scanf("%d",&nombre);
    for(int i=10 ; i>=1 ;i--){
        printf("%d*%d=%d \n", nombre , i , nombre*i);
    }

    return 0 ;

}
