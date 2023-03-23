#include <stdio.h>
#include <stdbool.h> //définit les type booléen et les constantes booléennes de base.

#define MAX_INTS 10

// Fonction qui vérifie si un entier est déjà présent dans un tableau
bool contains(int array[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            return true;
        }
    }
    return false;
}

// Fonction qui effectue la recherche d'un entier dans un tableau
bool search(int array[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            printf("Le nombre %d a ete trouve a l'index %d\n", value, i);
            return true;
        }
    }
    printf("Le nombre %d n'a pas ete trouve dans le tableau\n", value);
    return false;
}

int main(void)
{
    int ints[MAX_INTS];
    int size = 0;

    // Saisie des entiers
    printf("Saisissez jusqu'a %d entiers (-1 pour arreter) :\n", MAX_INTS);
    while (size < MAX_INTS)
    {
        int value;
        scanf("%d", &value);
        if (value == -1)
        {
            break;
        }
        if (contains(ints, size, value))
        {
            printf("Le nombre %d a deja ete saisi\n", value);
        }
        else
        {
            ints[size++] = value;
        }
    }

    // Affichage de la liste des entiers
    printf("Liste des entiers :\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ints[i]);
    }
    printf("\n");

    // Recherche d'un entier
    int value;
    printf("Entrez un entier a rechercher dans la liste :\n");
    scanf("%d", &value);
    search(ints, size, value);

    return 0;
}












