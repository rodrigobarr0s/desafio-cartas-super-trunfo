#include <stdio.h>

int main() {
    // Definindo variáveis para armazenar as informações das cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[100], cidade2[100];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, pontos1, pontos2;
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;

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

    // Comparando o atributo escolhido (exemplo: População)
    printf("\nComparação de Cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%c): População = %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): População = %lu\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate! Ambas as cartas possuem a mesma população.\n");
    }

    // Exemplo de comparação de outro atributo (Área)
    printf("\nComparação de Cartas (Atributo: Área):\n");
    printf("Carta 1 - %s (%c): Área = %.2f km²\n", cidade1, estado1, area1);
    printf("Carta 2 - %s (%c): Área = %.2f km²\n", cidade2, estado2, area2);

    if (area1 > area2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (area2 > area1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate! Ambas as cartas possuem a mesma área.\n");
    }

    // Exemplo de comparação de Densidade Populacional (menor vence)
    printf("\nComparação de Cartas (Atributo: Densidade Populacional):\n");
    printf("Carta 1 - %s (%c): Densidade = %.2f\n", cidade1, estado1, densidade1);
    printf("Carta 2 - %s (%c): Densidade = %.2f\n", cidade2, estado2, densidade2);

    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (densidade2 < densidade1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate! Ambas as cartas possuem a mesma densidade populacional.\n");
    }

    // Exemplo de comparação de PIB per Capita
    printf("\nComparação de Cartas (Atributo: PIB per Capita):\n");
    printf("Carta 1 - %s (%c): PIB per Capita = %.2f\n", cidade1, estado1, pib_per_capita1);
    printf("Carta 2 - %s (%c): PIB per Capita = %.2f\n", cidade2, estado2, pib_per_capita2);

    if (pib_per_capita1 > pib_per_capita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pib_per_capita2 > pib_per_capita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate! Ambas as cartas possuem o mesmo PIB per Capita.\n");
    }

    return 0;
}
