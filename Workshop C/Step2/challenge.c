#include <stdio.h>

int main()
{
    int Nombre, i;
    
    printf(" Entrez un entier: ");
    scanf("%d",&Nombre);
    
    printf("\n Table de multiplication de %d est: \n", Nombre);
    
    for(i=1; i<=10; ++i)
    {
        printf(" %d * %d = %d \n", nbr, i, nbr*i);
    }
    
    return 0;
}