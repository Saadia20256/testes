#include<stdio.h >
#include<stdlib.h>

int main () {
    float celsuis , kelvin ;
    printf("entrer la temperature en degre celsuis :");
    scanf ("%f",&celsuis);
    kelvin = celsuis + 273.15 ;
    printf("%f degre celsuis a %f degre kelvin \n" , celsuis , kelvin);
    return 0 ;
}
