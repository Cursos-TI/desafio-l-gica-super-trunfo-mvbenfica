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

    // Escolha de dois atributos
    int op1, op2;
    float val1a_c1=0, val1a_c2=0, val2a_c1=0, val2a_c2=0;
    float soma1, soma2;

    printf("\n===== COMPARAÇÃO AVANÇADA - SUPER TRUNFO =====\n");
    printf("1-População 2-Área 3-PIB 4-Pontos Turísticos 5-Densidade 6-PIB per Capita\n");
    printf("Opção 1: "); scanf("%d", &op1);
    printf("Opção 2 (diferente de %d): ", op1); scanf("%d", &op2);
    if(op2<1||op2>6||op2==op1) {
        printf("Opção inválida!\n");
        return 1;
    }

    // Atribui valores ao primeiro atributo
    switch(op1) {
        case 1: 
            val1a_c1 = populacao1; 
            val1a_c2 = populacao2; 
            break;
        case 2: 
            val1a_c1 = area1;
            val1a_c2 = area2;       
            break;
        case 3: 
            val1a_c1 = pib1;
            val1a_c2 = pib2;
            break;
        case 4: 
            val1a_c1 = pontosTuristicos1;
            val1a_c2 = pontosTuristicos2;
            break;
        case 5:
            val1a_c1 = densidade1;
            val1a_c2 = densidade2;
            break;
        case 6: 
            val1a_c1 = pibPerCapita1;
            val1a_c2 = pibPerCapita2;
            break;
    }
    // Atribui valores ao segundo atributo
    switch(op2) {
        case 1:
            val2a_c1 = populacao1;
            val2a_c2 = populacao2;
            break;
        case 2:
            val2a_c1 = area1;
            val2a_c2 = area2;
            break;
        case 3:
            val2a_c1 = pib1;
            val2a_c2 = pib2;
            break;
        case 4:
            val2a_c1 = pontosTuristicos1;
            val2a_c2 = pontosTuristicos2;
            break;
        case 5:
            val2a_c1 = densidade1;
            val2a_c2 = densidade2;
            break;
        case 6:
            val2a_c1 = pibPerCapita1;
            val2a_c2 = pibPerCapita2;
            break;
    }

    // Soma dos atributos
    soma1 = val1a_c1 + val2a_c1;
    soma2 = val1a_c2 + val2a_c2;

    // Exibição dos valores
    printf("\nCarta 1 - %s (%s): Atributo%d=%.2f, Atributo%d=%.2f\n", nomePais1, nomeCidade1, op1, val1a_c1, op2, val2a_c1);
    printf("Carta 2 - %s (%s): Atributo%d=%.2f, Atributo%d=%.2f\n", nomePais2, nomeCidade2, op1, val1a_c2, op2, val2a_c2);

    // Comparação dos atributos com if-else e &&
    int win1 = 0, win2 = 0;
    if ((op1 == 5 && val1a_c1 < val1a_c2) || (op1 != 5 && val1a_c1 > val1a_c2)) {
        win1 = 1;
    } else if (val1a_c2 != val1a_c1) {
        win2 = 1;
    }
    if ((op2 == 5 && val2a_c1 < val2a_c2) || (op2 != 5 && val2a_c1 > val2a_c2)) {
        win1 += 1;
    } else if (val2a_c2 != val2a_c1) {
        win2 += 1;
    }

    // Resultado final considerando soma de atributos e número de vitórias
    printf("\nSoma dos valores: Carta1=%.2f, Carta2=%.2f\n", soma1, soma2);
    if ((win1 > win2) && (soma1 >= soma2)) {
        printf("\nResultado Final: Carta 1 (%s) venceu!\n", nomePais1);
    } else if ((win2 > win1) && (soma2 >= soma1)) {
        printf("\nResultado Final: Carta 2 (%s) venceu!\n", nomePais2);
    } else {
        printf("\nResultado Final: Empate!\n");
    }
    return 0;
}
