#include <stdio.h>

//début du programme
int main()
 {

 //décalration des variables
 int a, b, temp;


 //afficher "Entrez deux entiers puis les saisir dans a et b
 printf("Entrez deux entiers: ");
 scanf("%d%d", &a, &b);

 //procédés d'écahnge des valeurs
 temp=a;
 a = b;
 b = temp;

 //afficher "Voici vos deux entiers echangés : a, b"
 printf("Voici vos deux entiers echanges : %d, %d", a, b);


 //fin du programme
 return 0;
 }
