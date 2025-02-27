#include <stdio.h>

int main() {
    // Variaveis para duas cidades
    char codigoA[4], codigoB[4];
    char cidadeA[50], cidadeB[50];
    int populacaoA, populacaoB;
    float areaA, areaB;
    float pibA, pibB;
    int pontosTuristicosA, pontosTuristicosB;
    
    // Cadastro da Cidade A
    printf("--- Cidade 1 ---\n");
    printf("Codigo: ");
    scanf("%s", codigoA);
    printf("Nome: ");
    scanf("%s", cidadeA);
    printf("Populacao: ");
    scanf("%d", &populacaoA);
    printf("Area: ");
    scanf("%f", &areaA);
    printf("PIB: ");
    scanf("%f", &pibA);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicosA);
    
    // Cadastro da Cidade B
    printf("\n--- Cidade 2 ---\n");
    printf("Codigo: ");
    scanf("%s", codigoB);
    printf("Nome: ");
    scanf("%s", cidadeB);
    printf("Populacao: ");
    scanf("%d", &populacaoB);
    printf("Area: ");
    scanf("%f", &areaB);
    printf("PIB: ");
    scanf("%f", &pibB);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicosB);

    // Comparacao das cartas
    printf("\n=== COMPARACAO ===\n");
    
    // Comparacao por populacao
    printf("\nPopulacao: ");
    if (populacaoA > populacaoB) {
        printf("%s vence\n", cidadeA);
    } else if (populacaoB > populacaoA) {
        printf("%s vence\n", cidadeB);
    } else {
        printf("Empate\n");
    }
    
    // Comparacao por area
    printf("Area: ");
    if (areaA > areaB) {
        printf("%s vence\n", cidadeA);
    } else if (areaB > areaA) {
        printf("%s vence\n", cidadeB);
    } else {
        printf("Empate\n");
    }
    
    // Comparacao por PIB
    printf("PIB: ");
    if (pibA > pibB) {
        printf("%s vence\n", cidadeA);
    } else if (pibB > pibA) {
        printf("%s vence\n", cidadeB);
    } else {
        printf("Empate\n");
    }
    
    // Comparacao por pontos turisticos
    printf("Pontos Turisticos: ");
    if (pontosTuristicosA < pontosTuristicosB) {
        printf("%s vence\n", cidadeA);
    } else if (pontosTuristicosB > pontosTuristicosA) {
        printf("%s vence\n", cidadeB);
    } else {
        printf("Empate\n");
    }

    return 0;
}