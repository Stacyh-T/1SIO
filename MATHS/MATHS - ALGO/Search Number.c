#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()                                                              //début du programme
{
    int nombre_trouver, valeur;                                         //initaliser avec les variables (nombre_trouver, valeur) en entier

    printf("Essayez de trouver le nombre entre 10 et 20 inclus !\n");   //afficher "Essayez de trouver le nombre entre 10 et 20 inclus !"

    nombre_trouver = 12;                                                //nombre à trouver = 12


    while (valeur != nombre_trouver)                                    //tant que la valeur rentrée est différente du nombre à trouver
    {
        printf("Votre nombre : ");                                      //afficher "Votre nombre : "
        scanf("%d", &valeur);                                           //saisir (valeur)


        if (valeur < nombre_trouver)                                    //si la valeur est inférieure au nombre à trouver
        {
            printf("Plus grand !\n");                                       //afficher "Plus grand !"
        } else if (valeur > nombre_trouver)                             //sinon si la valeur est supérieur au nombre à trouver
            {
                printf("Plus petit !\n");                                   //afficher "plus petit"
            }
    }

    printf("Bravo ! Vous avez trouve !");                               //une fois le nombre trouvé, afficher "Bravo ! Vous avez trouve"



    return 0;                                                           //fin du programme
}
