#include <stdio.h>

int main() {
    
    // Definindo variáveis para armazenar as informações das cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[100], cidade2[100];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, pontos1, pontos2;
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    // Leitura dos dados para a Carta 1
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);
    printf("Código da carta (exemplo A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]%*c", cidade1);  
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área em km²: ");
    scanf("%f", &area1);
    printf("PIB em bilhões de reais: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%f", &pontos1);

    // Leitura dos dados para a Carta 2
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);
    printf("Código da carta (exemplo B02): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]%*c", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área em km²: ");
    scanf("%f", &area2);
    printf("PIB em bilhões de reais: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%f", &pontos2);

    // Cálculos da Densidade Populacional e PIB per Capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_per_capita1 = pib1 * 1000000000 / populacao1;  // Convertendo PIB para reais
    pib_per_capita2 = pib2 * 1000000000 / populacao2;  // Convertendo PIB para reais

    // Cálculo do Super Poder (somando todos os atributos)
    super_poder1 = populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 + (1 / densidade1);
    super_poder2 = populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + (1 / densidade2);

    // Comparações Atributo por Atributo
    printf("\nComparação de Cartas:\n");

    // Comparação de População
    printf("População: ");
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparação de Área
    printf("Área: ");
    if (area1 > area2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparação de PIB
    printf("PIB: ");
    if (pib1 > pib2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparação de Pontos Turísticos
    printf("Pontos Turísticos: ");
    if (pontos1 > pontos2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparação de Densidade Populacional (menor valor vence)
    printf("Densidade Populacional: ");
    if (densidade1 < densidade2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparação de PIB per Capita
    printf("PIB per Capita: ");
    if (pib_per_capita1 > pib_per_capita2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparação de Super Poder
    printf("Super Poder: ");
    if (super_poder1 > super_poder2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    return 0;
}
