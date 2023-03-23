#include <stdio.h>
#include <stdlib.h>

int main()
{                                       //début du programme
int nb, carre;                          //déclaration des variables nb et carre en entier

printf("Entrez un nombre : ");          //afficher "entrez un nombre"
scanf("%d", &nb);                       //saisir nb

carre = nb * nb;                        // carre est égale à nb * nb (donc à son carré)

printf("Son carre est : %d", carre);    //afficher "son carre est : valeur du carre"
    return 0;                           // retourner 0
}                                       //fin du programme
