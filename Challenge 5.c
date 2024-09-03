#include <stdio.h>
void etat_eau(float temp){
    if( temp >= 100){
        printf("L'etat de l'eau est Gaz \n");
    } else if (temp < 0){
         printf("L'etat de l'eau est Solide \n");
    }else {
         printf("L'etat de l'eau est Liquide \n");
    }
}
int main(){
    float temp;
    printf("Entrez une temperature en Celsius\n");
    scanf("%f", &temp);
    etat_eau(temp);
    return 0;
}
