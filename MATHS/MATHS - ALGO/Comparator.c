#include <stdio.h>
#include <stdlib.h>



int main()                                                          //Début du programme
{
    double valeur1, valeur2;                                            //Iinitialisation des variables (valeur1 et valeur2) en double

    printf("Entrez deux valeurs numeriques : ");                        //afficher (entrez les deux valeurs numeriques)
    scanf("%lf", &valeur1);                                             //saisir (valeur1)
    scanf("%lf", &valeur2);                                             //saisir (valeur2)

    if (valeur1 < valeur2)                                              //si valeur1 est inférieure à valeur2
    {
        printf("La valeur la plus grande est : %.3lf", valeur2);            //aficher "La valeur la plus grande est valeur2"
    } else if (valeur2 < valeur1)                                        //sinon si valeur2 est inférieure à valeur 1
        {
            printf("La valeur la plus grande est : %.3lf", valeur1);        //afficher "La valeur la plus grande est valeur1"
        } else                                                               //sinon
            {
                printf("Les deux valeurs sont egales");                         //afficher "les deux valeurs sont egales"
            }


    return 0;                                                       //fin du programme
}
