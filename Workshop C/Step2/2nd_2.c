#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("CALCULATRICE V1.0\n");

    //declaration des ariables:
    char operation;
    float a;
    float b;
    float resultat = 0.0;
    
    //Demandes de a et b:
    printf("Veuillez taper votre opération (par exemple: 1 + 2):\n");
    scanf("%f %c %f", &a, &operation, &b);

    //Verifier les entrées:
    while (operation != '+' && operation != '-' && operation != '*' && !(operation == '/' && b != 0)) {
        printf("Cet opérateur n'est pas disponible ou vous essayer de diviser par ZÉRO! \n Saisissez à nouveau votre opération: ");
        scanf("%f %c %f", &a, &operation, &b);
    }
    
    //Les operations:
    if (operation == '+') {
        resultat = a + b;
        printf("a + b = %.2f \n", resultat);
    }
    
    if (operation == '-') {
        resultat = a - b;
        printf("a - b = %.2f \n", resultat);
    }
    
    if (operation == '*') {
        resultat = a * b;
        printf("a * b = %.2f \n", resultat);
    }
    
    if (operation == '/') {
        resultat = a / b;
        printf("a / b = %.2f \n", resultat);
    }

    printf("!______Merci______! \n");
    return 0;
}