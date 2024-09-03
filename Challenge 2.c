#include <stdio.h>

float conversion(float cel){
    return cel + 273.15;
}

int main(){
    float temp;
    printf("Entrez une temperature en Celsuis\n");
    scanf("%f", &temp);
    printf("La temperature equivalente en Kelvin est %.2f", conversion(temp));
    return 0; 
}