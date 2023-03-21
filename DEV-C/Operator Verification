#include <stdio.h>
#include <stdlib.h>

int main(void)
{

        double valeur1, valeur2;            //Valeurs saisies au clavier
        double resultat;                    //Pour mémoriser le résulat du calcul
        char operateur;                     //Pour mémoriser l'opérateur

        printf("Entrez la valeur 1 : ");    //afficher"Entrez la valeur 1"
        scanf("%lf", &valeur1);             //premiere valeur saisie dans 'valeur1'

        printf("Entrez la valeur 2 : ");    //afficher"Entrez la valeur 2"
        scanf("%lf", &valeur2);             //seconde valeur saisie dans 'valeur2'

        printf("Entrez l'operateur : ");    //afficher"entrez l'opérateur"
        scanf("%s", &operateur);            //signe opération saisie dans 'operateur'




        switch (operateur)                  //fonction switch permettant de naviguer entre les opérateurs
        {
        case '+':                           //si l'operateur choisi est +
             resultat = valeur1 + valeur2;  //resultat en somme
             printf("%.3lf %c %.3lf = %.3lf", valeur1, operateur, valeur2, resultat);    //afficher le résultat final
             break;                          //sortir de la condition

        case '-':                           //si l'operateur choisi est -
             resultat = valeur1 - valeur2;  //resultat en différence
             printf("%.3lf %c %.3lf = %.3lf", valeur1, operateur, valeur2, resultat);    //afficher le résultat final
             break;                          //sortir de la condition

        case '*':                           //si l'operateur choisi est *
             resultat = valeur1 * valeur2;  //resultat en produit
             printf("%.3lf %c %.3lf = %.3lf", valeur1, operateur, valeur2, resultat);    //afficher le résultat final
             break;                          //sortir de la condition

        case '/':                           //si l'operateur choisi est /
            if (valeur2 == 0)
            {
                printf("Erreur, on ne peut pas diviser par 0");
            }
            else{
                resultat = valeur1 / valeur2;  //resultat en quotient
                printf("%.3lf %c %.3lf = %.3lf", valeur1, operateur, valeur2, resultat);    //afficher le résultat final
            }

             break;                          //sortir de la condition

        default :                           //par défault
            printf("Operateur incorrect !");  //afficher "opérateur incorrect"
        }

        return 0;                       //retourner 0 pour savoir que le programme n'ait pas eu de probleme de compilation
}





