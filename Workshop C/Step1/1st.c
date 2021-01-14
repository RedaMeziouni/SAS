#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Projet v1.0 \n");

    //Declaration des variables;
    char Nom[15], Prenom[20], Mail[30], Sex[10];
    int Age, Tel;

    //Demande d'infos;
    printf("Entrer votre Nom: ");
    scanf("%s", Nom);

    printf("Entrer votre Prenom: ");
    scanf("%s", Prenom);

    printf("Entrer votre Sex: ");
    scanf("%s", Sex);

    printf("Entrer votre Age: ");
    scanf("%d", &Age);

    printf("Entrer votre adresse email: ");
    scanf("%s", Mail);

    printf("Ajouter votre Numero de telephone: ");
    scanf("%d", &Tel);

    //Resulatat final:
    printf("Bonjour %s %s %s\n", Sex, Nom, Prenom);
    printf("Vos infos perso sont: \n");
    printf("Age: %d ans \n", Age);
    printf("Mail: %s \n", Mail);
    printf("Telephone: %d \n", Tel);
    printf("Je vous souhaite une tres bonne journée, Merci \n");

    return 0;
}