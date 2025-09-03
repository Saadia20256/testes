#include<stdio.h>
#include<stdlib.h>

int main () {
    int a, i ;
    printf("entrer un nombre a:");
    scanf("%d",&a);
    printf("table du multplication %d : \n" ,a);
    for (i=1 ; i<=10 ; i++){
        printf("%d * %d =%d  \n " , a , i , a*i);}
        return 0 ;
}
