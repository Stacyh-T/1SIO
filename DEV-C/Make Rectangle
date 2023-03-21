#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hauteur;
    int largeur;
    int i;
    int j;
    int choix;
    int resultat;

    printf("Entrez la largeur du rectangle en m : ");
    scanf("%d", &largeur);

    printf("Entrez la hauteur du rectangle en m : ");
    scanf("%d", &hauteur);

    printf("Voulez vous avoir un trou au milieu si non 1 si oui 2 : ");
    scanf("%d", &choix);

    switch(choix)
    {
        case 1 :
            for (i=1; i<=hauteur;i++){
                for(j=1; j<=largeur;j++){
                    printf(" #");
                }
                printf("\n");
            }
        break;


        case 2 :
            for (j = 0; j < largeur ; j++) {
                for (i = 0; i < hauteur ; i++) {
                    if ((i > 0 && i < hauteur-1) && (j > 0 && j < largeur-1)) {
                        printf(" ");
                    } else
                        printf("#");
                }
                    printf("\n");
                }

            break;

        default :
            printf("Vous devez choisir entre 1 ou 2");
    }



    printf("\n");

    resultat = largeur * hauteur;
    printf("L'aire du rectangle est de : %d m2", resultat);

    printf("\n");


    return 0;
}
