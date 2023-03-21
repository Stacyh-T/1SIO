#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c,delta=0,x1=0,x2=0;

    printf("Saisir a : ");
    scanf("%lf", &a);

    printf("Saisir b : ");
    scanf("%lf", &b);

    printf("Saisir c : ");
    scanf("%lf", &c);

    if (a==0)
    {
        printf("Solution unique");
        printf("%lf", -c/b);
    }
    else
    {



        delta = (b*b) - (4 *(a*c));

        if (delta == 0)
        {
            x1 = (-b)/(2 * a);

            printf("\n");
            printf("--Resultats--\n");
            printf("%.2lf\n", delta);
            printf("%.2lf\n", x1);

        }
        else if (delta > 0)
        {
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);

            printf("\n");
            printf("--Resultats--\n");
            printf("%.2lf\n", delta);
            printf("%.2lf\n", x1);
            printf("%.2lf\n", x2);

        }
        else if (delta < 0)
        {
            printf("\n");
            printf("%.2lf\n", delta);
            printf("Pas de racine pour cette equation");
        }
    }
    return 0;
}








