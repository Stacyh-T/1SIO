#include <stdio.h>
#include <stdlib.h>

void tableau_construction(int T[], int N)    //procédure pour construire un tableau d'entier
{
    for (int i = 0; i <= N; i++)  //pour i allant de 0 à N 
    {
        T[i] = i; //le tableau prend pour entier les valeurs de i à chaque itération
    }
}

void erathostene(int T[], int N)  //procédure pour faire le crible d'érathostene
{
    for (int i = 2; i <= N; i++) //pour i allant de 2 à N
    {
        if (T[i] != 0)  //si T[i] est différent de 0
        {
            int j = i + i;  // j = i+i
            while (j <= N)  //tant que J est inférieur à N
            {
                T[j] = 0;   //T[j] prend la valeur de 0
                j += i; //et on incrémente j de j + 1 à chaque itération
            }
        }
    }
}

void afficher_nb_premier(int T[], int N) //procédure pour afficher les nombre premiers
{
    for (int i = 2; i <= N; i++)    //pour i allant de 2 à N
    {
        if (T[i] > 1)   //si T[i] est strictement supérieur à 1
        {
            printf("%d ", T[i]); //on affiche le nombre premier
        }
    }
    printf("\n"); //on fait un espace entre les nombre premiers
}

int main()
{
    int N; //initialisation de N
    printf("Entrez le nombre N : "); 
    scanf("%d", &N);    //saisir N
    int T[N+1]; //initialisation de T[N+1]
    tableau_construction(T, N); //on construit le tableau 
    erathostene(T, N);  //on fait la procédure erathostene
    afficher_nb_premier(T, N);  //et on affiche les nombre premiers
    return 0;
}
