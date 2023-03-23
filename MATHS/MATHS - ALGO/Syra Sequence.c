#include <stdio.h>

int syracuse(int n)
{
    if (n % 2 == 0)   // Si n est pair
    {
        return n / 2;
    }
    else     // Si n est impair
    {
        return 3 * n + 1;
    }
}

int main()
{
    int n, terme;

    printf("Entrez le premier terme de la suite : ");
    scanf("%d", &n); // L'utilisateur saisit le premier terme de la suite

    terme = n; // Initialise le terme courant avec le premier terme

    printf("Suite de Syracuse : %d, ", terme); // Affiche le premier terme

    while (terme != 1)   // Tant que le terme n'est pas égal à 1
    {
        terme = syracuse(terme); // Calcule le terme suivant en utilisant la fonction externe
        printf("%d, ", terme); // Affiche le terme suivant
    }

    return 0;
}

