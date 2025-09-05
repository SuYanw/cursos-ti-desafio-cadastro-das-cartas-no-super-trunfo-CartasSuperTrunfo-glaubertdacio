#include <stdio.h>


int main() {


    // declarando strings
    char estado1[1], codigo1[4], cidade1[50];
    char estado2[1], codigo2[4], cidade2[50];


    // declarandos numeros inteiros
    int populacao1, pturisticos1;
    int populacao2, pturisticos2;
    int poder1, poder2;

    // declarando numeros flutuantes
    float popl1, area1, pib1, denspopulacional1, pipcapta1;
    float popl2, area2, pib2, denspopulacional2, pipcapta2;

    printf("Informe os dados da Carta1:\n");
    printf("Estado:");

    scanf("%s", estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    getchar();
    fgets(cidade1, 50, stdin);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pturisticos1);

    printf("Super Poder: ");
    scanf("%d", &poder1);

    printf("\n\nDados da Carta1:");
    printf("Estado: %s\n", estado1);

    printf("Código: %s\n", codigo1);

    printf("Nome da Cidade: %s", cidade1);

    printf("População: %d\n", populacao1);

    printf("Área: %.2f km²\n", area1);

    printf("PIB: %.2f bilhões de reais\n", pib1);

    printf("Número de Pontos Turísticos: %d\n", pturisticos1);

    denspopulacional1 = (float)populacao1 / area1;

    printf("Densidade Populacional: %.2f\n", denspopulacional1);

    pipcapta1 = (float) populacao1 / pib1;
    printf("PIB per Capita: %.2f\n", pipcapta1);
    printf("Super Poder: %d\n", poder1);

    printf("\n\n\n\n");

    printf("Informe os dados da Carta2:\n");
    printf("Estado:");

    scanf("%s", estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    getchar();
    fgets(cidade2, 50, stdin);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pturisticos2);

    printf("Super Poder: ");
    scanf("%d", &poder1);

    printf("\n\nDados da Carta2:");
    printf("Estado: %s\n", estado2);

    printf("Código: %s\n", codigo2);

    printf("Nome da Cidade: %s", cidade2);

    printf("População: %d\n", populacao2);

    printf("Área: %.2f km²\n", area2);

    printf("PIB: %.2f bilhões de reais\n", pib2);

    printf("Número de Pontos Turísticos: %d\n", pturisticos2);

    denspopulacional2 = (float)populacao2 / area2;

    printf("Densidade Populacional: %.2f\n", denspopulacional2);

    pipcapta2 = (float) populacao2 / pib2;
    printf("PIB per Capita: %.2f\n", pipcapta2);
        
    printf("Super Poder: %d\n", poder2);

    printf("\n\n\nComparativos:\n");


    return 0;
}
