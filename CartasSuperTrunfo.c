#include <stdio.h>

int main(){
    // Variáveis da carta 1.
    char estado1;
    char codigo1[5];
    char cidade1[30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int numPontosTuristicos1;

    // Variáveis da carta 2.
    char estado2;
    char codigo2[5];
    char cidade2[30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numPontosTuristicos2;

    // Entrada de dados da carta 1.
    printf("Carta 1 \n");

    printf("Digite o Estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: \n");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %29s", cidade1);

    printf("Digite a população: \n");
    scanf(" %lu", &populacao1);

    printf("Digite a Área (em km²): \n");
    scanf(" %f", &area1);

    printf("Digite o PIB: \n");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numPontosTuristicos1 );

    printf("\n"); //Pular linha.

    // Entrada de dados da carta 2.
    printf("Carta 2 \n");

    printf("Digite o Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %29s", cidade2);

    printf("Digite a população: \n");
    scanf(" %lu", &populacao2);

    printf("Digite a Área (em km²): \n");
    scanf(" %f", &area2);

    printf("Digite o PIB: \n");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numPontosTuristicos2);

    printf("\n"); //Pular linha.

    // Saída de dados da carta 1.
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.3f\n", area1);
    printf("PIB: %.3f\n", pib1);
    printf("Número de pontos turísticos: %d\n", numPontosTuristicos1);

    // Evita divisão por zero/negativa para densidade
    float densidade1;
    if (area1 > 0.0f){
        densidade1 = (float)populacao1 / area1;
    } else {
        densidade1 = 0.0f;
        printf("Aviso: área da Carta 1 inválida (<= 0). Densidade ajustada para 0.\n");
    }
    printf("Densidade populacional: %.2f\n", densidade1);

    float pibPerCapita1 = (populacao1 > 0) ? (pib1 / (float) populacao1) : 0.0f;
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    float superPoder1 = (float) populacao1 + area1 + pib1 + (float) numPontosTuristicos1 + pibPerCapita1 - densidade1;
    printf("Super poder: %.2f\n\n", superPoder1);

    // Saída de dados da carta 2.
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.3f\n", area2);
    printf("PIB: %.3f\n", pib2);
    printf("Número de pontos turísticos: %d\n", numPontosTuristicos2);

    float densidade2;
    if (area2 > 0.0f){
        densidade2 = (float)populacao2 / area2;
    } else {
        densidade2 = 0.0f;
        printf("Aviso: área da Carta 2 inválida (<= 0). Densidade ajustada para 0.\n");
    }
    printf("Densidade populacional: %.2f\n", densidade2);

    float pibPerCapita2 = (populacao2 > 0) ? (pib2 / (float) populacao2) : 0.0f;
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    float superPoder2 = (float) populacao2 + area2 + pib2 + (float) numPontosTuristicos2 + pibPerCapita2 - densidade2;
    printf("Super poder: %.2f\n\n", superPoder2);

    // =========================
    // MENU INTERATIVO (switch)
    // =========================
    int opcao = -1;
    do {
        printf("\n=== MENU DE COMPARAÇÃO ===\n");
        printf("0 - Sair\n");
        printf("1 - Nome da cidade (apenas exibir)\n");
        printf("2 - População\n");
        printf("3 - Área\n");
        printf("4 - PIB\n");
        printf("5 - Número de pontos turísticos\n");
        printf("6 - Densidade demográfica (menor vence)\n");
        printf("Escolha uma opção: ");
        if (scanf(" %d", &opcao) != 1){
            // Limpa entrada inválida
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {}
            opcao = -1;
        }

        switch(opcao){
            case 0:
                printf("Encerrando...\n");
                break;

            case 1: { // Apenas exibição
                printf("\n--- EXIBIÇÃO ---\n");
                printf("Carta 1: %s (Estado %c, Código %s)\n", cidade1, estado1, codigo1);
                printf("Carta 2: %s (Estado %c, Código %s)\n", cidade2, estado2, codigo2);
                printf("Apenas exibição dos nomes. Nenhuma comparação realizada.\n");
                break;
            }

            case 2: { // População
                printf("\n--- COMPARAÇÃO: População ---\n");
                printf("%s: %lu habitantes\n", cidade1, populacao1);
                printf("%s: %lu habitantes\n", cidade2, populacao2);

                // if-else aninhado
                if (populacao1 == populacao2){
                    printf("Empate!\n");
                } else {
                    if (populacao1 > populacao2){
                        printf("Resultado: %s venceu!\n", cidade1);
                    } else {
                        printf("Resultado: %s venceu!\n", cidade2);
                    }
                }
                break;
            }

            case 3: { // Área
                printf("\n--- COMPARAÇÃO: Área (km²) ---\n");
                printf("%s: %.3f km²\n", cidade1, area1);
                printf("%s: %.3f km²\n", cidade2, area2);

                if (area1 == area2){
                    printf("Empate!\n");
                } else {
                    if (area1 > area2){
                        printf("Resultado: %s venceu!\n", cidade1);
                    } else {
                        printf("Resultado: %s venceu!\n", cidade2);
                    }
                }
                break;
            }

            case 4: { // PIB
                printf("\n--- COMPARAÇÃO: PIB ---\n");
                printf("%s: %.3f\n", cidade1, pib1);
                printf("%s: %.3f\n", cidade2, pib2);

                if (pib1 == pib2){
                    printf("Empate!\n");
                } else {
                    if (pib1 > pib2){
                        printf("Resultado: %s venceu!\n", cidade1);
                    } else {
                        printf("Resultado: %s venceu!\n", cidade2);
                    }
                }
                break;
            }

            case 5: { // Pontos turísticos
                printf("\n--- COMPARAÇÃO: Pontos Turísticos ---\n");
                printf("%s: %d pontos\n", cidade1, numPontosTuristicos1);
                printf("%s: %d pontos\n", cidade2, numPontosTuristicos2);

                if (numPontosTuristicos1 == numPontosTuristicos2){
                    printf("Empate!\n");
                } else {
                    if (numPontosTuristicos1 > numPontosTuristicos2){
                        printf("Resultado: %s venceu!\n", cidade1);
                    } else {
                        printf("Resultado: %s venceu!\n", cidade2);
                    }
                }
                break;
            }

            case 6: { // Densidade demográfica (menor vence)
                printf("\n--- COMPARAÇÃO: Densidade Demográfica (hab/km²) ---\n");
                printf("%s: %.2f hab/km²\n", cidade1, densidade1);
                printf("%s: %.2f hab/km²\n", cidade2, densidade2);

                if (densidade1 == densidade2){
                    printf("Empate!\n");
                } else {
                    if (densidade1 < densidade2){
                        printf("Resultado: %s venceu! (menor densidade)\n", cidade1);
                    } else {
                        printf("Resultado: %s venceu! (menor densidade)\n", cidade2);
                    }
                }
                break;
            }

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}
