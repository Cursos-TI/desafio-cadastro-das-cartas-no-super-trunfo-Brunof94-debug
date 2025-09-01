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
    scanf(" %s", cidade1);

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
    scanf(" %s", cidade2);

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

    float densidade1 = (float)populacao1 / area1; // Adiciona a uma variável densidade populacional.

    printf("Densidade populacional: %.2f\n", densidade1);

    float pibPerCapita1 = pib1 / (float) populacao1; // Adiciona uma variável PIB per capita.

    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    float superPoder1 = (float) populacao1 + area1 + pib1 + (float) numPontosTuristicos1 + pibPerCapita1 - densidade1; // Adiciona uma variável Super Poder.


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

    float densidade2 = (float)populacao2 / area2; // Adiciona a uma variável densidade populacional.

    printf("Densidade populacional: %.2f\n", densidade2);

    float pibPerCapita2 = pib2 / (float) populacao2; // Adiciona uma variável PIB per capita.

    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    float superPoder2 = (float) populacao2 + area2 + pib2 + (float) numPontosTuristicos2 + pibPerCapita2 - densidade2; // Adiciona uma variável Super Poder.

    printf("Super poder: %.2f\n\n", superPoder2);


    //Comparar cartas.

    printf("Comparação de Cartas: \n");

    if (populacao1 > populacao2){
        printf("População: Carta 1 venceu!\n");
    }else{
        printf("População: Carta 2 venceu!\n");
    }

    if (area1 > area2){
        printf("Área: Carta 1 venceu!\n");
    }else{
        printf("Área: Carta 2 venceu!\n");
    }

    if (pib1 > pib2){
        printf("PIB: Carta 1 venceu!\n");
    }else{
        printf("PIB: Carta 2 venceu!\n");
    }

    if (numPontosTuristicos1 > numPontosTuristicos2){
        printf("Número de pontos turísticos: Carta 1 venceu!\n");
    }else{
        printf("Número de pontos turísticos: Carta 2 venceu!\n");
    }

    if (densidade1 < densidade2){
        printf("Densidade populacional: Carta 1 venceu!\n");
    }else{
        printf("Densidade populacional: Carta 2 venceu!\n");
    }

    if (pibPerCapita1 > pibPerCapita2){
        printf("PIB per Capita: Carta 1 venceu!\n");
    }else{
        printf("PIB per Capita: Carta 2 venceu!\n");
    }

    if (superPoder1 > superPoder2){
        printf("Super poder: Carta 1 venceu!\n");
    }else{
        printf("Super poder: Carta 2 venceu!\n");
    }

    return 0;
}
