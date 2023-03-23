#include <stdio.h>
#include <stdlib.h>

int main()
{
    double ValeurLue; //valeursaisie au clavier
    double min, max; //pour mémoriser les résultats min max

    printf("Entrez une serie de valeurs : ");  //afficher "Entrez une série de valeurs
    scanf("%lf", &ValeurLue);               //saisir (ValeurLue)

    min = ValeurLue;                     //min est égale à ValeurLue
    max = ValeurLue;                     //max est égale à ValeurLue

    while (ValeurLue < 0 || ValeurLue > 0)  // tant que la valeurlue est inférieure à 0 ou supérieur à 0
    {
        if (ValeurLue > max)
        {
                max = ValeurLue;
        }
        if (ValeurLue < min)
        {
            min = ValeurLue;
        }
    }

    if (max < 0 || ValeurLue >0)
    {
        printf("La plus grande valeur est : %lf", max);
        printf("La plus petite valeur est : %lf", min);
    }else
    {
        printf("Aucune valeur n'a ete saisie");
    }


    return 0;
}
