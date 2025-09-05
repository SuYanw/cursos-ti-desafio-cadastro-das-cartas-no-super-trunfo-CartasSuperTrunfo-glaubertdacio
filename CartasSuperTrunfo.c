#include <stdio.h>


int main() {


    // declarando strings
    char estado[5], codigo[5], cidade[50];

    // declarandos numeros inteiros
    int populacao, pturisticos;

    // declarando numeros flutuantes
    float popl, area, pib, denspopulacional, pipcapta;


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
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pturisticos);

    printf("\n\nDados da Carta1:");
    printf("Estado: %s\n", estado);

    printf("Código: %s\n", codigo);

    printf("Nome da Cidade: %s", cidade);

    printf("População: %d\n", populacao);

    printf("Área: %.2f km²\n", area);

    printf("PIB: %.2f bilhões de reais\n", pib);

    printf("Número de Pontos Turísticos: %d\n", pturisticos);

    denspopulacional = (float)populacao / area;

    printf("Densidade Populacional: %.2f\n", denspopulacional);

    pipcapta = (float) populacao / pib;
    printf("PIB per Capita: %.2f\n", pipcapta);

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
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pturisticos);

    printf("\n\nDados da Carta1:");
    printf("Estado: %s\n", estado);

    printf("Código: %s\n", codigo);

    printf("Nome da Cidade: %s", cidade);

    printf("População: %d\n", populacao);

    printf("Área: %.2f km²\n", area);

    printf("PIB: %.2f bilhões de reais\n", pib);

    printf("Número de Pontos Turísticos: %d\n", pturisticos);

    denspopulacional = (float)populacao / area;

    printf("Densidade Populacional: %.2f\n", denspopulacional);

    pipcapta = (float) populacao / pib;
    printf("PIB per Capita: %.2f\n", pipcapta);
    
    return 0;
}
