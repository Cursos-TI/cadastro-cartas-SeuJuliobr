#include <stdio.h>

int main() {
  
char estado1;
char codigoCarta1[4];
char nomeCidade1[50];
int populacao1;
float area1;
float pib1;
int pontosTuristicos1;
float densidadePopulacional1;
float pibPerCapita1;

char estado2;
char codigoCarta2[4];
char nomeCidade2[50];
int populacao2;
float area2;
float pib2;
int pontosTuristicos2;
float densidadePopulacional2;
float pibPerCapita2;

printf("Estado (A-H): ");
scanf(" %C", &estado1);

printf("Código da carta: ");
scanf(" %s", codigoCarta1);

printf("Nome da cidade: ");
scanf(" %s", nomeCidade1);

printf("População: ");
scanf(" %d", &populacao1);

printf("Área: ");
scanf(" %f", &area1);

printf("PIB: ");
scanf(" %f", &pib1);

printf("Pontos turísticos: ");
scanf(" %d", &pontosTuristicos1);

densidadePopulacional1 = (float) populacao1 / area1;
pibPerCapita1 = (pib1 * 1000000000) / (float) populacao1;

printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

printf("\n--- CADASTRO DA CARTA 2 ---\n");

printf("Estado (A-H): ");
scanf(" %C", &estado2);

printf("Código da carta: ");
scanf(" %s", codigoCarta2);

printf("Nome da cidade: ");
scanf(" %s", nomeCidade2);

printf("População: ");
scanf(" %d", &populacao2);

printf("Área: ");
scanf(" %f", &area2);

printf("PIB: ");
scanf(" %f", &pib2);

printf("Pontos turísticos: ");
scanf(" %d", &pontosTuristicos2);
    
densidadePopulacional2 = (float) populacao2 / area2;
pibPerCapita2 = (pib2 * 1000000000) / (float) populacao2;

printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

return 0;
} 