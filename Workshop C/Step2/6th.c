#include <stdio.h>
#include <stdlib.h>

int int main()
{

	printf("Programme qui multiple deux entiers positifs selon le principe recursif \n");
	
	//Declaration des variables:
	int a, b, Gnbr, Pnbr;  //Gnbr = Grande Nombre, Pnbr = Petit Nombre
	int rslt = 0 ;
	
	//Demande des entiers: 
	printf("Entrer a: ");
	scanf("%d ", &a);

	printf("Entrer b: ");
	scanf("%d", &b);

	//Verificatoion des entiers a et b:
	if (a > b) {
		Gnbr = a;
		Pnbr = b;
	}
	else {
		Gnbr = b;
		Pnbr = a;
	}

	//Affichage de Gnbr et Pnbr:
	printf("Grand Nombre: %d - Petit Nombre: %d \n", Gnbr, Pnbr);

	//Puisque le petit nombre est non null (!=0):
	while (Pnbr) {
		//Le cas 'un Nombre impaire:
		if (Pnbr % 2)
			Pnbr--; //Decrementation
			//L'ajoute de Gnbr au resultat
			rslt +=  Gnbr;
			//Affichage de resultat temporaire
			printf("Gnbr: %d - Pnbr: %d - Resltat: %d \n", Gnbr, Pnbr, rslt);

		//Pnbr est un nombre impaire, on va le decrementé lorsqu'il esr pair
		Gnbr *= 2; //Gnbr = Gnbr * 2

		//Division de Pnbr par 2
		Pnbr /= 2;

		//Affichage de resultat temporaire 
		if (Pnbr) {
			printf("Gnbr: %d - Pnbr: %d - Resltat: %d \n", Gnbr, Pnbr, rslt);
		}
	}

	//Affichage de resultat final
	printf("Resultat: %d \n", rslt);




	return 0;
}