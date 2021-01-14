#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)

{

	printf("Calcul d'une equation de deuxieme degre\n");

	//Declaration des variables: 
	double x1, x2, delta, a, b, c;

	//Demande des a, b, c:
	printf("Entrez les valeurs de a, b, c \n");

	printf("Donner la valeur de a: ");
	scanf("%lf", &a);
	printf("Donner la valeur de b: ");
	scanf("%lf", &b);
	printf("Donner la valeur de c: ");
	scanf("%lf", &c);

	//Definition de delta:
	delta = (b*b)-(4*a*c);


	//Les conditions d'un equation de deuxieme degrée:
	if (delta == 0.0)
	{
		x1 = -b /(2*a);
		printf("la solution unique est xs = %.2f \n",x1);
	}
	if (delta > 0.0)
	{
		x1 = (-b - sqrt(delta))/(2*a);
		x2 = (-b + sqrt(delta))/(2*a);
		printf("les deux racines sont : x1 = %.2f et x2 = %.2f \n",x1, x2);
	}
	if (delta < 0.0);

		printf("l'equation n admet pas de solution \n");

	return 0;
}