#include <stdio.h>
#include <stdlib.h>

int main()
{
int valeurn, resultfact, i;                                         //déclaration des variables valeurn, resultfact, i

    printf("Entrez une valeur : ");                                 // afficher "Entrez une valeur"
    scanf("%d", &valeurn);                                          // saisir valeurn

    resultfact = 1;                                                 // resultfact = 1

    for(i=1; i <= valeurn; i++)                                     // pour i variant de 1 à la valeurn en incrementant i de 1
    {
        resultfact = (resultfact) * i;                              // resultfact = resultfact * i
    }

    printf("La factorielle de %d est %d", valeurn, resultfact);     // afficher "La factorielle de valeurn est resultfact


    return 0;                                                       //fin du programme
}
