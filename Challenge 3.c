#include <stdio.h>

float conversion(float dist){
    return dist * 1093.61;
}

int main(){
    float distance;
    printf("Entrez une distance en km\n");
    scanf("%f", &distance);
    printf("La distance en Yards est %.2f", conversion(distance));

    return 0;
}
