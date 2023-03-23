#include <stdio.h>
#include <stdlib.h>

int main()                                              //début du programme
{
    double valeurlue;                                   //initialisation de la variable (valeurlue) en double

    printf("Entrez une valeur numerique : ");           //afficher "Entrez une valeur numerique"
    scanf("%lf", &valeurlue);                           //saisir (valeurlue)

    if (valeurlue < 0)                                  //si valeurlue est inférieure à 0
    {
        valeurlue = -valeurlue;                             //n inverse le signe de valeurlue
    }

    printf("La valeur absolue est : %.3lf", valeurlue);   //afficher "La valeur absolue est valeurlue


    return 0;                                           //fin du programme
}
