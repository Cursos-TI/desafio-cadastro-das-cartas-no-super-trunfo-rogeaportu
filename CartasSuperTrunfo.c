#include <stdio.h>

int main(){
    // declaração de variáveis carta1
    char estado[10], codigoCarta[10], nomeCidade[100] ;
    int populacao, numeroPontosturisticos;
    float area, pib,densidadePopulacional, pibPerCapita;

    // declaração de variáveis carta2
    char estado2[10], codigoCarta2[10], nomeCidade2[100] ;
    int populacao2, numeroPontosturisticos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2;

    // coleta de informações primeira carta
    printf(" Cadastre carta 1: \n");
    printf("Cadastre o estado: \n");
    scanf(" %s", estado);
    printf(" Cadastre codigo: \n");
    scanf(" %s", codigoCarta);
    printf(" Cadastre o nome da Cidade: \n");
    scanf(" %s", nomeCidade);
    printf(" Populacao: \n");
    scanf(" %d", &populacao);
    printf(" Area Km2: \n");
    scanf(" %f", &area);
    printf(" Pib: \n");
    scanf(" %f", &pib);
    printf(" Numero de pontos turisticos: \n");
    scanf(" %d", &numeroPontosturisticos);

    // coleta de informações segunda carta

    printf(" Cadastre carta 2: \n");
    printf("Cadastre o estado: \n");
    scanf(" %s", estado2);
    printf(" Cadastre codigo: \n");
    scanf(" %s", codigoCarta2);
    printf(" Cadastre o nome da Cidade: \n");
    scanf(" %s", nomeCidade2);
    printf(" Populacao: \n");
    scanf(" %d", &populacao2);
    printf(" Area Km2: \n");
    scanf(" %f", &area2);
    printf(" Pib: \n");
    scanf(" %f", &pib2);
    printf(" Numero de pontos turisticos: \n");
    scanf(" %d", &numeroPontosturisticos2);

    // Calculando a densidade populacional e PIB per capita para carta 1
    densidadePopulacional = (float)populacao / area;
    pibPerCapita = pib / populacao;

    // Calculando a densidade populacional e PIB per capita para carta 2
    densidadePopulacional = (float)populacao2 / area2;
    pibPerCapita = pib2/ populacao2;



    // apresentndo os resultados carta 1

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km2\n", area);
    printf("PIB: %.2f Bilhões\n", pib);
    printf("Número de pontos turisticos: %d\n", numeroPontosturisticos);
    printf("\n");

    // apresentndo os resultados carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf(" Código: %c\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f Bilhões\n", pib2);
    printf("Número de pontos turisticos: %d\n", numeroPontosturisticos2);
    printf("\n");

    return 0;

}
