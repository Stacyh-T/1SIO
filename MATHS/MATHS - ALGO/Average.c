#include <stdio.h>
#include <stdlib.h>

int main()                                                                  //début du programme
{
    double note1, note2, coeff1, coeff2, somme, moyenne;                    //déclaration des variables
    printf("Saisissez une premiere note et son coefficient attache : ");    //afficher "Saisissez une premiere note et son coefficient attache : "
    scanf("%lf", &note1);                                                   //saisir (note1)
    scanf("%lf", &coeff1);                                                  //saisir (note2)

    printf("Saisissez une deuxieme note et son coefficient attache : ");    //afficher "Saisissez une deuxième note et son coefficient attache : "
    scanf("%lf", &note2);                                                   //saisir (note2)
    scanf("%lf", &coeff2);                                                  //saisir (note3)

    somme = (note1 * coeff1) + (note2 * coeff2);                            //faire la somme de la moyenne

    moyenne = somme / (coeff1 + coeff2);                                    //faire la moyenne en divisant la somme par la somme des coefficents

    printf("Votre moyenne est de : %.3lf",moyenne);                         //afficher "Votre moyenne est de : moyenne"

    return 0;                                                               //fin du programme
}
