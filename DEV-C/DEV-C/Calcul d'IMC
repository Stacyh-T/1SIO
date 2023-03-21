#include <stdio.h>
#include <stdlib.h>

int main()
{
    double masse;
    double taille;
    double taille2;
    double age;
    double imc;


    do
    {

        printf("Rentrez votre age : ");
        scanf ("%lf", &age);

        printf("\nRentrez votre masse (en kg) : ");
        scanf("%lf", &masse);

        printf("\Rentrez votre taille (en m) : ");
        scanf("%lf", &taille);

        taille2 = taille * taille;
        imc = (masse) / (taille2);


        if (imc <= -16.5)
        {
            printf("dénutrition ou famine");
        }
        else if (imc >16.5 && imc <= 18.5)
        {
            printf("Maigreur");
        }
        else if (imc > 18.5 && imc <= 25)
        {
            printf("corpulence normale");
        }
        else if (imc > 25 && imc <=30)
        {
            printf("surpoids");
        }
        else if (imc > 30 && imc <= 35)
        {
            printf("obesite modere");
        }
        else if (imc > 35 && imc <= 40)
        {
            printf("obesite severe");
        }
        else if (imc > 40)
        {
            printf("obesite morbide ou massive");
        }

    printf("\n");
    }
        while (age >= 18 || age <= 65);


    return 0;
}
