#include <stdio.h>

int main () {
   char código[4]; // Códico da cidade (ex: A01)
   int população;
   float área; // em km²
   float PIB; // em R$
   int pontos_turisticos;

   printf("Digite o Códico da Cidade: \n");
   scanf("%s", &código);

   printf("Digite a população: \n");
   scanf("%d", &população);

   printf("Digite a área: \n");
   scanf("%f", &área);

   printf("Digite o PIB: \n");
   scanf("%f", &PIB);
   
   printf("DIgite os pontos turisticos: \n");
   scanf("%d", &pontos_turisticos);

   printf("códico da cidade: %d - população: %d\n", código, população);
   printf("área: %f\n", área);
   printf("pontos turisticos: %d -PIB: %f\n", pontos_turisticos, PIB);


return 0;
}