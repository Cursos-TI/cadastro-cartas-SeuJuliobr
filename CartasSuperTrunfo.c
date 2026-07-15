#include <stdio.h>

int main() {
  
    // --- VARIÁVEIS CARTA 1 ---
    char estado1;
    char codigoCarta1[4];
    char nomeCidade1[50];
    unsigned long int populacao1; 
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1; 

    // --- VARIÁVEIS CARTA 2 ---
    char estado2;
    char codigoCarta2[4];
    char nomeCidade2[50];
    unsigned long int populacao2; 
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2; 
    // --- ENTRADA DE DADOS: CARTA 1 ---
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); 

    printf("Código da carta: ");
    scanf(" %s", codigoCarta1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); 

    printf("População: ");
    scanf(" %lu", &populacao1); 

    printf("Área: ");
    scanf(" %f", &area1);

    printf("PIB: ");
    scanf(" %f", &pib1);

    printf("Pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidadePopulacional1 = (float) populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float) populacao1;
    
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0f) + 
                  (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);

    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // --- ENTRADA DE DADOS: CARTA 2 ---
    printf("\n--- CADASTRO DA CARTA 2 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2); 

    printf("Código da carta: ");
    scanf(" %s", codigoCarta2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf(" %lu", &populacao2); 
    printf("Área: ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf(" %f", &pib2);

    printf("Pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);
        

    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float) populacao2;
    
   
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0f) + 
                  (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);

    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // --- COMPARAÇÃO DAS CARTAS E EXIBIÇÃO DE RESULTADOS ---
    printf("\nComparação de Cartas:\n");

  
    printf("População: %s venceu (%d)\n", 
           (populacao1 > populacao2) ? "Carta 1" : "Carta 2", 
           populacao1 > populacao2);

  
    printf("Área: %s venceu (%d)\n", 
           (area1 > area2) ? "Carta 1" : "Carta 2", 
           area1 > area2);

    
    printf("PIB: %s venceu (%d)\n", 
           (pib1 > pib2) ? "Carta 1" : "Carta 2", 
           pib1 > pib2);

    // Pontos Turísticos (maior vence)
    printf("Pontos Turísticos: %s venceu (%d)\n", 
           (pontosTuristicos1 > pontosTuristicos2) ? "Carta 1" : "Carta 2", 
           pontosTuristicos1 > pontosTuristicos2);

    printf("Densidade Populacional: %s venceu (%d)\n", 
           (densidadePopulacional1 < densidadePopulacional2) ? "Carta 1" : "Carta 2", 
           densidadePopulacional1 < densidadePopulacional2);

    // PIB per Capita (maior vence)
    printf("PIB per Capita: %s venceu (%d)\n", 
           (pibPerCapita1 > pibPerCapita2) ? "Carta 1" : "Carta 2", 
           pibPerCapita1 > pibPerCapita2);

    // Super Poder (maior vence)
    printf("Super Poder: %s venceu (%d)\n", 
           (superPoder1 > superPoder2) ? "Carta 1" : "Carta 2", 
           superPoder1 > superPoder2);

    return 0;
}