#include <stdio.h>
 /**
 * Desafio Super Trunfo - Países
 * Objetivo: Cadastro e exibição de duas cartas de cidades.
 */
int main() {
    
    // --- VARIÁVEIS PARA A CARTA 1 --

    char estado1;
    char codigo1[4];
    char cidade1[50];
    int  populacao1;
    float area1;
    float PIB1;
    int pontosTuristicos1;

    // --- VARIÁVEIS PARA A CARTA 2 --

    char estado2;
    char codigo2[4];
    char cidade2[50];
    int  populacao2;
    float area2;
    float PIB2;
    int pontosTuristicos2;

   // ---------------------------------------------------------
    // ENTRADA DE DADOS - CARTA 1
    // ---------------------------------------------------------

    printf("=== Cadastro da Carta 1 ===\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Código da carta (Ex:A01): ");
    scanf(" %s", &codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB:");
    scanf("%f", &PIB1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // ---------------------------------------------------------
    // ENTRADA DE DADOS - CARTA 2
    // ---------------------------------------------------------

    printf("=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);  

    printf("Código da carta (Ex:A01): ");
    scanf(" %s", &codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB:");
    scanf("%f", &PIB2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // ---------------------------------------------------------
    // EXIBIÇÃO DOS DADOS (carta 1)
    // ---------------------------------------------------------

    printf("\n====================================\n");
    printf("      DADOS DAS CARTAS CADASTRADAS  \n");
    printf("====================================\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos turisticos: %d\n", pontosTuristicos1);

    // ---------------------------------------------------------
    // EXIBIÇÃO DOS DADOS (carta 2)
    // ---------------------------------------------------------

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);

    return 0;
}
