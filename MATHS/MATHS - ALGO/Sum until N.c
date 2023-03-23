#include <stdio.h>
#include <stdlib.h>

int main()
{                                                                       //début du programme
int valeurn, somme, i;                                                  //déclaration des variables valeurnn somme et i en tant qu'entier

    printf("Entrez une valeur : ");                                     //afficher "Entrez une valeur : "
    scanf("%d", &valeurn);                                              //saisir (valeurn)

    somme = 0;                                                          //initialiser la somme à 0

    for(i=1; i <= valeurn; i++)                                         //pour i allant de 1 à n
    {
        somme = (somme) + i;                                            //somme est égale à la somme + i
    }

    printf("La somme des valeurs de 1 a %d est %d", valeurn, somme);    //afficher "La somme des valeurs de 1 à valeurn est :"


    return 0;                                                           //retourner 0
}                                                                       //fin du programme
