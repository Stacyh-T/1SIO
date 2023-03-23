#include <stdio.h>

int main()
{
    int n, i, prochTerm;
    int T[50];

    T[1] = 0,
    T[2] = 1,

    printf("Entrez le nombre de termes : ");
    scanf("%d", &n); // L'utilisateur saisit le nombre de termes

    printf("Suite de Fibonacci : ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", T[1]); // Affiche le terme actuel de la suite

        prochTerm = T[1] + T[2]; // Calcule le prochain terme en additionnant les deux termes précédents
        T[1] = T[2]; // Stocke le terme précédent 1 dans T[1]
        T[2] = prochTerm; // Stocke le terme précédent 2 dans T[2]
    }
    return 0;
}
