#include <stdio.h>
#include <stdlib.h>



int main(void)
{

	//Declaration des variables:
	float a, b;
	char operation, reponse;

	//Demandes de a et b:
    printf("Veuillez taper votre opération (par exemple: 1 + 2):\n");
    scanf("%f %c %f", &a, &operation, &b);

    //Verifier les entrées:
    while (operation != '+' && operation != '-' && operation != '*' && !(operation == '/' && b != 0)) {
        printf("Cet opérateur n'est pas disponible ou vous essayer de diviser par ZÉRO! \n Saisissez à nouveau votre opération: ");
        scanf("%f %c %f", &a, &operation, &b);
    }
	

	switch (operation)
		{
		case '+' :
			printf ("a + b = %.2f \n", a + b);
			break;
		case '-' :
			printf ("a - b = %.2f \n", a - b);
			break;
		case '*' :
			printf ("a * b = %.2f \n", a * b);
			break;
		case '/' :
			printf ("a / b = %.2f \n", a / b);
			break;
		
		default :
			printf ("OPERATION INCONNUE!\n");
			break;
			}
			
	printf("!______Merci______! \n");


	return 0;
}