#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Variáveis da Carta 1
    char estado1, codigo1[4], nomeCidade1[100];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1;

    // Variáveis da Carta 2
    char estado2, codigo2[4], nomeCidade2[100];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2;

    // Início do cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o Estado: ");
    scanf(" %c", &estado1);
    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a População: ");
    scanf("%d", &populacao1);
    printf("Digite a Área em km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Início do cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o Estado: ");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a População: ");
    scanf("%d", &populacao2);
    printf("Digite a Área em km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibindo as informações da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    // Exibindo as informações da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    // Comparação fixa por PIB per Capita
    printf("\nComparação de cartas (Atributo: PIB per Capita):\n");
    printf("Carta 1 - %s: %.8f\n", nomeCidade1, pibPerCapita1);
    printf("Carta 2 - %s: %.8f\n", nomeCidade2, pibPerCapita2);

    if (pibPerCapita1 > pibPerCapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
