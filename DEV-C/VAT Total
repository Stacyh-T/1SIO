#include <stdio.h>
#include <stdlib.h>

int main()
{
 double montant_ht = 0;
 double taux_tva = 0;
 double montant_ttc;

    printf("Quel est votre montant ?\n");
    scanf("%lf", &montant_ht);
    printf("Rentrez votre taux TVA ?\n");
    scanf("%lf", &taux_tva);

    montant_ttc = montant_ht * (1+ (taux_tva/100));
    // montant_ttc = (100/montant_ht)/(100+taux_tva);
    // montant_ttc = montant_ht + (100+taux_tva);

    printf("Voici votre montant HT : %lf \n",montant_ht);
    printf("Voici votre taux TVA : %lf \n",taux_tva);
    printf("Voici votre montant TTC : %lf \n",montant_ttc);

    return 0;
}


