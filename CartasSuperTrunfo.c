#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado1;
char codigoCarta1[4];
char nomeCidade1[50];
int populacao1;
float area1;
float pib1;
int pontosTuristicos1;

char estado2;
char codigoCarta2[4];
char nomeCidade2[50];
int populacao2;
float area2;
float pib2;
int pontosTuristicos2;
  // Área para entrada de dados
printf("--- CADASTRO DA CARTA 1 ---\n");

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

  // Área para exibição dos dados da cidade

return 0;
} 
