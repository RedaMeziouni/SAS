#include <stdio.h>
#include <stdlib.h>



int main()
{  

   printf("!! Un nombre premier est un nombre qui est divisé par un et lui meme !! \n");

   //Declaration et initialisation:
   int p = 0, i, nbr;


   //Demande de nombre a verifier: 
   printf(" Entrez un nombre: ");
   scanf("%d", &nbr);



   //Declaration de la boucle et le conditions:
   for(i = 1; i <= nbr; i++)
   {
      if(nbr % i == 0)
      {
         p++; //Incrementation de p
      }
   }
   if(p == 2)
   {
      printf(" %d est un nombre premier. \n", nbr);
   }
   else
   {
      printf(" %d n'est pas un nombre premier. \n", nbr);
   }


   printf("!! MERCI !! \n");
   return 0;
}