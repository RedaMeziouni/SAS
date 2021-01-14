#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Bonjour! \n");

    //Declaration des variables:
    int a, b;

    //Demande des variables:
    printf("Entrer a: ");
    scanf("%d", &a);

    printf("Entrer b: ");
    scanf("%d", &b);

    //Appliquer les operations sur a et b:
    printf("a + b = %d \n", a + b);
    printf("a - b = %d \n", a - b);
    printf("a x b = %d \n", a * b);
    printf("a / b = %d et le reste %d \n", a / b, a % b);

    return 0;
}