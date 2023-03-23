#include <stdio.h>
#include <stdlib.h>

int main()                                              //début du programme
{
    int a=0,b=0,c=0,temp=0;                             //initialisation des variables (a,b,c,temp) en entier

    printf("Saisir 3 nombres successivement : \n");     //aficher "Saisir 3 nombres successivement"
        scanf("%d",&a);                                     //saisir (a)
        scanf("%d",&b);                                     //saisir (b)
        scanf("%d",&c);                                     //saisir (c)


while(a>c||a>b||b>c)                                     //tant que a>c ou a>b ou b>c
{
    if(a>b)                                                 //si a >b
    {
        temp=a;                                                 //échange des valeurs a et b
        a=b;
        b=temp;
    }
    if(b>c)                                                 //si b > c
    {
        temp=b;                                                 //échange des valeurs b et c
        b=c;
        c=temp;

    }
}

    printf("L'ordre exact est le suivant : %d,%d,%d",a,b,c);    //une fois le tri terminé, afficher "L'ordre exact est le suivant : a, b, c
    return 0;
}
