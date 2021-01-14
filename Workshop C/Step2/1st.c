#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
   int a , b ;

        printf("entrer un nombre :");

        scanf("%d",&a);

        printf("entrer un nombre :");

        scanf("%d",&b);

        printf("le max est %d",max(a,b));
        
        printf("\nle min est %d",min(a,b));
       // max(a,b);

    return 0;
}

 int max(int a,int b) {

     if (a<b)  {

           // printf("%d est supérieur de %d",a,b);
           return b;
        }
        else
             {
                 //printf("%d est inferieur de %d",b,a);
                 return a;
            }

 }
int min(int a,int b) {

     if (a>b)  {

           // printf("%d est supérieur de %d",a,b);
           return b;
        }
        else
             {
                 //printf("%d est inferieur de %d",b,a);
                 return a;
            }

 }