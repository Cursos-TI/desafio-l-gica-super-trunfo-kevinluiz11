#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>

int main() {
    // Variáveis das cartas
    char estado[2][30];
    char cod[2][4]; // vetor de 2 strings de até 3 caracteres + \0
    char nomeCidade[2][50];
    int populacao[2], nptur[2];
    float area[2], pib[2];
    float densidade[2], pibPerCapita[2];

    // Cadastro da primeira carta
    printf("Digite o estado da primeira carta: ");
    scanf("%s", estado[0]);
    printf("Digite o nome da cidade da primeira carta: ");
    scanf("%s", nomeCidade[0]);
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf("%s", cod[0]);
    printf("Digite a populacao da primeira carta: ");
    scanf("%d", &populacao[0]);
    printf("Digite a area da primeira carta: ");
    scanf("%f", &area[0]);
    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib[0]);
    printf("Digite o numero de pontos turisticos da primeira carta: ");
    scanf("%d", &nptur[0]);

    // Cadastro da segunda carta
    printf("\nDigite o estado da segunda carta: ");
    scanf("%s", estado[1]);
    printf("Digite o nome da cidade da segunda carta: ");
    scanf("%s", nomeCidade[1]);
    printf("Digite o código da segunda carta (ex: B02): ");
    scanf("%s", cod[1]);
    printf("Digite a populacao da segunda carta: ");
    scanf("%d", &populacao[1]);
    printf("Digite a area da segunda carta: ");
    scanf("%f", &area[1]);
    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib[1]);
    printf("Digite o numero de pontos turisticos da segunda carta: ");
    scanf("%d", &nptur[1]);

    // Cálculo da Densidade Populacional e PIB per Capita
    densidade[0] = populacao[0] / area[0];
    densidade[1] = populacao[1] / area[1];

    pibPerCapita[0] = pib[0] / populacao[0];
    pibPerCapita[1] = pib[1] / populacao[1];

    // Exibição dos Dados das Cartas
    printf("\n######### Dados da Primeira Carta #########\n");
    printf("Estado: %s\n", estado[0]);
    printf("Cidade: %s\n", nomeCidade[0]);
    printf("Codigo: %s\n", cod[0]);
    printf("Populacao: %d\n", populacao[0]);
    printf("Area: %.2f\n", area[0]);
    printf("PIB: %.2f\n", pib[0]);
    printf("Pontos Turisticos: %d\n", nptur[0]);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade[0]);
    printf("PIB per Capita: %.2f\n", pibPerCapita[0]);

    printf("\n######### Dados da Segunda Carta #########\n");
    printf("Estado: %s\n", estado[1]);
    printf("Cidade: %s\n", nomeCidade[1]);
    printf("Codigo: %s\n", cod[1]);
    printf("Populacao: %d\n", populacao[1]);
    printf("Area: %.2f\n", area[1]);
    printf("PIB: %.2f\n", pib[1]);
    printf("Pontos Turisticos: %d\n", nptur[1]);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade[1]);
    printf("PIB per Capita: %.2f\n", pibPerCapita[1]);

    // Comparação de Atributos
    printf("\n######### Comparação de Cartas #########\n");
    
    // Escolhendo População para comparar
    printf("Comparação de cartas (Atributo: População)\n");
    printf("%s (%s): %d habitantes\n", nomeCidade[0], estado[0], populacao[0]);
    printf("%s (%s): %d habitantes\n", nomeCidade[1], estado[1], populacao[1]);

    if (populacao[0] > populacao[1]) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade[0]);
    } else if (populacao[1] > populacao[0]) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade[1]);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}