#include <stdio.h>
#include <stdlib.h>

int main()
{
double celsius = 0;
double farhenheit = 0;
double temperature = 0;
int sens;


printf("Entrez une temperature\n");
scanf("%lf", &temperature);

printf("Sens 1 : Celsius en Farhenheit\n");
printf("Sens 2 : Farhenheit en Celsius\n");
printf("Choisissez un sens\n");
scanf("%d", &sens);

switch(sens){

    case 1 :
        farhenheit = temperature*(9 / 5) + 32;
        printf("Temperature (C): %lf\n", temperature);
        printf("Temperature (F): %lf\n", farhenheit);
        break;

    case 2 :
        celsius = (temperature-32)*(5 / 9) + 32;
        printf("Temperature (F) : %lf\n", temperature);
        printf("Temperature (C) : %lf\n", celsius);
        break;

    default :
        printf("Conversion impossible !\n");
    }


return 0;
}
