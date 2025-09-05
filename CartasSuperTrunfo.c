#include <stdio.h>


int main() {


    // declarando strings
    char estado[5], codigo[5], cidade[50];

    // declarandos numeros inteiros
    int populacao, pturisticos;

    // declarando numeros flutuantes
    float popl, area, pib;


    printf("Informe os dados da Carta1:\n");
    printf("Estado:");

    scanf("%s", estado);

    printf("Codigo: ");
    scanf("%s", codigo);

    printf("Nome da cidade: ");
    getchar();
    fgets(cidade, 50, stdin);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area: ");
    scanf("%f", &popl);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pturisticos);

    printf("\n\nDados da Carta1:");
    printf("Estado: %s\n", estado);

    printf("Código: %s\n", codigo);

    printf("Nome da Cidade: %s", cidade);

    printf("População: %d\n", populacao);

    printf("Área: %f km²\n", area);

    printf("PIB: %f bilhões de reais\n", pib);

    printf("Número de Pontos Turísticos: %d\n", pturisticos);

    printf("\n\n\n\n");

    printf("Informe os dados da Carta2:\n");
    printf("Estado:");

    scanf("%s", estado);

    printf("Codigo: ");
    scanf("%s", codigo);

    printf("Nome da cidade: ");
    getchar();
    fgets(cidade, 50, stdin);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area: ");
    scanf("%f", &popl);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pturisticos);

    printf("\n\nDados da Carta1:");
    printf("Estado: %s\n", estado);

    printf("Código: %s\n", codigo);

    printf("Nome da Cidade: %s", cidade);

    printf("População: %d\n", populacao);

    printf("Área: %f km²\n", area);

    printf("PIB: %f bilhões de reais\n", pib);

    printf("Número de Pontos Turísticos: %d\n", pturisticos);
    return 0;
}
