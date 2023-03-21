#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nombre;

   printf("Entrez un entier:\n");
   scanf("%d", &nombre);

   if (nombre % 2 == 0){
      printf("Paire\n");
   } else {
      printf("Impaire\n");
      }

   return 0;
}
