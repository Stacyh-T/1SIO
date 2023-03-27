#include <stdio.h>

void decomposition_base5(int N) //procedure de decomposition en base 5
{
    int T[100], i = 0; //initialisation d'un tableau de 100 place et de i 
    while (N != 0) //tant que N est différent de 0
    {
        T[i] = N % 5; //on fait le modulo de 5 du nombre rentré et on l'affecte au tableau
        N /= 5; //on redivise N par 5 
        i++; //et on incrémente i 
    }
    printf("La decomposition de ce nombre en base 5 est : ");
    for (int j = i - 1; j >= 0; j--) //pour j allant de i -1 à 0
    {
        printf("%d", T[j]);//on affiche les valeurs du tableau 
    }
    printf("\n"); //espace entre les nombres
}

int main() //fonction principal 
{
    int N;  //initialisation de N
    printf("Entrez un nombre : ");
    scanf("%d", &N); //saisir N
    decomposition_base5(N); //faire la procédure de décomposion en base 5
    return 0;
}
