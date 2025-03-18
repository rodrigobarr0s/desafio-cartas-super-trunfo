#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[5];  
    char cidade1[100];  
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[5];  
    char cidade2[100];  
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    // Leitura dos dados para a primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);  
    printf("Código da carta (exemplo A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);  
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área em km²: ");
    scanf("%f", &area1);
    printf("PIB em bilhões de reais: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos para a primeira carta
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 * 1000000000 / populacao1;  // PIB é em bilhões de reais.

    // Leitura dos dados para a segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);  
    printf("Código da carta (exemplo B03): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2); 
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área em km²: ");
    scanf("%f", &area2);
    printf("PIB em bilhões de reais: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos para a segunda carta
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 * 1000000000 / populacao2;  // PIB é em bilhões de reais.

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
