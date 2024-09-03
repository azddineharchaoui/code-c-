#include <stdio.h>

int main() {
    char  nom[20];
    char  prenom[20];
    int age;
    char  sexe[20]; 
    char  adresse[100];
    char  email[40];

    printf("Entrez votre nom\n");
    scanf("%s", nom);
    printf("Entrez votre prenom\n");
    scanf("%s", prenom);
    printf("Entrez votre age \n");
    scanf("%d", &age);
    printf("Entrez votre sexe,\n");
    scanf("%s", sexe);
    printf("Entrez votre adresse\n");
    scanf("%s", adresse);
    printf("Entrez votre email\n");
    scanf("%s", email );
    
    printf("Votre nom et prénom est %s %s,\n", nom, prenom);
    printf("vous avez %d ans,", age);
    printf("vous etes %s\n", sexe);
    printf("vous habitez a l\'adresse %s", adresse );
    printf("et votre email est %s \n", email);
    return 0;
}