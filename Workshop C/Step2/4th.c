#include <stdio.h>
#include <stdlib.h>

int main()

{

  printf("PGCD \n");

  //Declaration: 
  int A, B, X, Y, RESTE;

  
  //Donner la boucle:
  do
  {
    printf("Entrez A (non null): "); 
    scanf("%d",&A);

   }

  while(!A);

  do
  {
    printf("Entrez B (non null): ");
    scanf("%d",&B);

   }

  while(!B);

  for(RESTE=A,X = A, Y = B; RESTE ; X = Y, Y = RESTE)

    printf("%d \n", RESTE=X % Y);

  printf("Le pgcd de %d et %d est %d \n", A, B, X);

    return 0;

}