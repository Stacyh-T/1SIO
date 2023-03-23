#include <stdio.h>
#include <stdlib.h>

int main()                                          //debut du programme
{
    double valeur1, valeur2, resultat;              //initialisation des variables (valeur1, valeur2, resultat) en double


    printf("Entrez deux valeurs numeriques : ");    //afficher "Entrez deux valeurs numeriques"
    scanf("%lf", &valeur1);                         //saisir (valeur1)
    scanf("%lf", &valeur2);                         //saisir (valeur2)

    if (valeur1 < valeur2)                          //si valeur1 < valeur2
    {
        resultat = valeur2-valeur1;                 //resultat = valeur2 - valeur1
    } else                                          //sinon
        {
            resultat = valeur1 + (-valeur2);        //resultat = valeur1 - valeur2
        }

    printf("La difference est de : %.3lf", resultat); //afficher "La difference est de : resultat
    return 0;
}
