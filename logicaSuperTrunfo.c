#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Variáveis da Carta 1
    char estado1, codigo1[4], nomeCidade1[100], nomePais1[100];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1;

    // Variáveis da Carta 2
    char estado2, codigo2[4], nomeCidade2[100], nomePais2[100];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2;

    // Entrada da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Nome do País: ");
    scanf(" %[^\n]", nomePais1);
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Entrada da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Nome do País: ");
    scanf(" %[^\n]", nomePais2);
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Menu de comparação
    int opcao;
    printf("\n===== COMPARAÇÃO ENTRE CARTAS =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    printf("\n--- COMPARANDO ---\n");
    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("Carta 1 - %s (%s): %d\n", nomePais1, nomeCidade1, populacao1);
            printf("Carta 2 - %s (%s): %d\n", nomePais2, nomeCidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("Carta 1 - %s (%s): %.2f\n", nomePais1, nomeCidade1, area1);
            printf("Carta 2 - %s (%s): %.2f\n", nomePais2, nomeCidade2, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("Carta 1 - %s (%s): %.2f\n", nomePais1, nomeCidade1, pib1);
            printf("Carta 2 - %s (%s): %.2f\n", nomePais2, nomeCidade2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("Carta 1 - %s (%s): %d\n", nomePais1, nomeCidade1, pontosTuristicos1);
            printf("Carta 2 - %s (%s): %d\n", nomePais2, nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Populacional (menor vence)\n");
            printf("Carta 1 - %s (%s): %.2f\n", nomePais1, nomeCidade1, densidade1);
            printf("Carta 2 - %s (%s): %.2f\n", nomePais2, nomeCidade2, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("Carta 1 - %s (%s): %.8f\n", nomePais1, nomeCidade1, pibPerCapita1);
            printf("Carta 2 - %s (%s): %.8f\n", nomePais2, nomeCidade2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
            } else if (pibPerCapita2 > pibPerCapita1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Escolha um número de 1 a 6.\n");
            break;
    }

    return 0;
}
