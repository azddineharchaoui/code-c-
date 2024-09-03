#include <stdio.h>

float conversion(float vit){
    return vit * 0.27778;
}

int main(){
    float vitesse;
    printf("Entrez une vitesse en km/h\n");
    scanf("%f", &vitesse);
    printf("La vitesse en m/s est %.2f", conversion(vitesse));

    return 0;
}
