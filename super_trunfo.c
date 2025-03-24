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

    int opcao;
    
    // Menu interativo
    do {
        printf("\nEscolha o atributo para comparação:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de pontos turísticos\n");
        printf("5 - Densidade demográfica\n");
        printf("6 - Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: { // Comparação de População
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
                break;
            }

            case 2: { // Comparação de Área
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
                break;
            }

            case 3: { // Comparação de PIB
                printf("\nComparação de Cartas (Atributo: PIB):\n");
                printf("Carta 1 - %s (%c): PIB = %.2f bilhões de reais\n", cidade1, estado1, pib1);
                printf("Carta 2 - %s (%c): PIB = %.2f bilhões de reais\n", cidade2, estado2, pib2);

                if (pib1 > pib2) {
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                } else if (pib2 > pib1) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                } else {
                    printf("Resultado: Empate! Ambas as cartas possuem o mesmo PIB.\n");
                }
                break;
            }

            case 4: { // Comparação de pontos turísticos
                printf("\nComparação de Cartas (Atributo: Pontos turísticos):\n");
                printf("Carta 1 - %s (%c): Pontos turísticos = %.0f\n", cidade1, estado1, pontos1);
                printf("Carta 2 - %s (%c): Pontos turísticos = %.0f\n", cidade2, estado2, pontos2);

                if (pontos1 > pontos2) {
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                } else if (pontos2 > pontos1) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                } else {
                    printf("Resultado: Empate! Ambas as cartas possuem o mesmo número de pontos turísticos.\n");
                }
                break;
            }

            case 5: { // Comparação de Densidade Demográfica
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
                break;
            }

            case 6: { // Sair
                printf("Saindo do jogo...\n");
                break;
            }

            default: {
                printf("Opção inválida! Tente novamente.\n");
                break;
            }
        }
    } while (opcao != 6); // Loop até o jogador escolher sair

    return 0;
}
