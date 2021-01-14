#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
	//Declaration des variables:
	float r;

	//Demande de rayon: 
	printf("Entrer le rayon du cercle: ");
	scanf("%f ", &r);
	//float Diametre, Perimetre, Surface;

	//Les formules:
	float D = 2 * r;
	float P = r * 2 * PI;
	float S = PI * (r*r);

	//Resultats:
	printf("Une cercle de rayon: %.2f \n", r);	
	printf("-A pour diametre: %.2f \n", D);
	printf("-A pour perimetre: %.2f \n", P);
	printf("-A pour surface: %.2f \n", S);

	printf("Merci! \n");

	return 0;
}
