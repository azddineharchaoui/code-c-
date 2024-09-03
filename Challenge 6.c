#include <stdio.h>

int main(){
    float a, b;
    printf("Entrez deux reels a et b \n");
    scanf("%f", &a);
    scanf("%f", &b);
    printf("la somme de a et b est %.2f\n", a+b);
    printf("le produit de a et b est %.2f\n", a*b);
    printf("la difference de a et b est %.2f\n", a-b);
    printf("la devision de a et b est %.2f\n", a/b);
    return 0;

}
