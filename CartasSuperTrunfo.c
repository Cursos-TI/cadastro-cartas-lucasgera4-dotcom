#include <stdio.h>

int main(){
  
   char estado1[20], estado2[40], cidade1[20], cidade2[10];
   char codigo1[4], codigo2[50];
   int populacao1, populacao2, ponto_turistico1, ponto_turistico2;
   float area1, area2, pib1, pib2;

   
   printf("Digite o estado: \n");
   scanf("%s", estado1);

   printf("Digite o nome da cidade: \n");
   scanf("%s", cidade1);
   
   printf("Digite o codigo (ex: A01): \n");
   scanf("%s", codigo1);

   printf("Digite a populacao: \n");
   scanf("%d", &populacao1);

   printf("Digite o ponto turistico: \n");
   scanf("%d", &ponto_turistico1);

   printf("Digite a area: \n");
   scanf("%f", &area1);

  
   printf("Digite o pib: \n");
   scanf("%f", &pib2);

   printf("Digite o estado: \n");
   scanf("%s", estado2);

   printf("Digite o nome da cidade: \n");
   scanf("%s", cidade2);
   
   printf("Digite o codigo (ex: A01): \n");
   scanf("%s", codigo2);

   printf("Digite a populacao: \n");
   scanf("%d", &populacao2);

   printf("Digite o ponto turistico: \n");
   scanf("%d", &ponto_turistico2);

   printf("Digite a area: \n");
   scanf("%f", &area2);

  

  
   printf("----- DADOS DA CARTA1 -----\n");
   printf("Estado: %s\n", estado1);
   printf("Cidade: %s\n", cidade1);
   printf("Populacao: %d\n", populacao1);
   printf("Codigo: %s\n", codigo1);
   printf("Ponto turistico: %d\n", ponto_turistico1);
   printf("Area: %.2f\n", area1);
   printf("Pib: %.2f\n", pib1);

   printf("----- DADOS DA CARTA2 -----\n");
   printf("Estado: %s\n", estado2);
   printf("Cidade: %s\n", cidade2);
   printf("Populacao: %d\n", populacao2);
   printf("Codigo: %s\n", codigo2);
   printf("Ponto turistico: %d\n", ponto_turistico2);
   printf("Area: %.2f\n", area2);
   printf("Pib: %.2f\n", pib2);

   if(estado1 < 40){
     printf("Estado1 é o vencedor\n");
   } else {
     printf("Estado2 é o vencedor\n");
   } 

return 0;
} 
