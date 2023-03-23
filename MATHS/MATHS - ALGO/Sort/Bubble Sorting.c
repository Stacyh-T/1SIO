#include <stdio.h>
#include <stdlib.h>

// Nom : Tri-à-bulle
// Rôle : Trier les valeurs d'un tableau avec la méthode tri-à-bulle
// Entrée : Tableau
// Sortie : Tableau trié


void saisie_T(int T[], int n);                  //appel de la fonction saisie_T
void remonter_max(int T[], int n);              //appel de la fonction remonter_max
void tri_bulle(int T[], int n);                 //appel de la fonction tri_bulle
void afficher_T(int T[], int n);                //appel de la fonction afficher_T

int main()
{
    int n;                                          //déclaration de la variable entiere n
    printf("Entrez la taille du tableau : ");       //fonction d'affichage
    scanf("%d", &n);                                //rentrer la valeur saisie dans la variable n

    int T[n];                                       //déclaration du tableau T[]

    saisie_T(T, n);                                 //appel de la fonction saisie_T
    tri_bulle(T, n);                                //appel de la fonction tri_bulle
    afficher_T(T, n);                               //appel de la fonction afficher_T

    return 0;
}

void saisie_T(int T[], int n)                       //fonction saisie_t
{
    int i;                                          //déclaration variable entiere i
    for (i = 0; i < n; i++)                         //boucle for allant de 0 à n
    {
        printf("Entrez l'element %d : ", i+1);      //fonction d'affichage
        scanf("%d", &T[i]);                         //rentrer la valeur saisie dans l'index i variant dans T[]
    }
}

void remonter_max(int T[], int n)                   //fonction remonter_max
{
    int i, temp;                                    //déclaration des variables entieres i et temp
    for (i = n-1; i > 0; i--)                       //boucle for allant du nombre d'élements du tableau jusqu'a ce que i vaut 0
    {
        if (T[i] > T[i-1])                          //si la valeur du tableau est supérieur à la valeur prédente
        {
            temp = T[i];                            //on stock la valeur du tableau d'index i
            T[i] = T[i-1];                          //on interchange les valeurs entre i et i-1
            T[i-1] = temp;                          //on stock t[i-1]
        }
    }
}

void tri_bulle(int T[], int n)                      //fonction tri_bulle
{
    int i;                                          //déclaration de la variable entiere i
    for (i = 0; i < n; i++)                         //boucle i allant de 0 à n
    {
        remonter_max(T, n-i);                       //appel de la fonction remonter_max
    }
}

void afficher_T(int T[], int n)                     //fonction afficher_T
{
    int i;                                          //déclaration de la variable i
    for (i = 0; i < n; i++)                         //boucle for allant de 0 à n
    {
        printf("%d ", T[i]);                        //affichage des valeurs du tableau T[]
    }
    printf("\n");                                   //retour à la ligne
}
