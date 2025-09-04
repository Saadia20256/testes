#include<stdio.h>
#include<stdlib.h>

int main () {
    int n ;
    int sto=0;
    printf("entrer la valeur de n :");
    scanf("%d",&n);

    for(int i =1 ; i ; i++){
      if(i%2==0)
        continue;
      else{
       printf("%d  ",i);
    sto++;
    if(n==sto)
        break;
      }
    }
    return 0 ;

}
