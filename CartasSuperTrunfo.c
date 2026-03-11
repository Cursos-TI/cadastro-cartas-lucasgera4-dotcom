#include <stdio.h>

int main() {
   char estado1[20], cidade1[20];
   char codigo1[4];
   int populacao1, ponto_turistico1;
   float area1, pib1;
   
   printf("Digite o estado: ");
   scanf("%s", estado1);

   printf("Digite o nome da cidade: ");
   scanf("%s", cidade1);
   
   printf("Digite o codigo (ex: A01): ");
   scanf("%s", codigo1);

   printf("Digite a populacao: ");
   scanf("%d", &populacao1);

   printf("Digite o ponto turistico: ");
   scanf("%d", &ponto_turistico1);

   printf("Digite a area: ");
   scanf("%f", &area1);

   printf("Digite o pib: ");
   scanf("%f", &pib1);

   printf("\n----- DADOS DA CARTA -----\n");
   printf("Estado: %s\n", estado1);
   printf("Cidade: %s\n", cidade1);
   printf("Populacao: %d\n", populacao1);
   printf("Codigo: %s\n", codigo1);
   printf("Ponto turistico: %d\n", ponto_turistico1);
   printf("Area: %.2f\n", area1);
   printf("Pib: %.2f\n", pib1);

   return 0;
}
