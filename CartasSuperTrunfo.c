#include <stdio.h>

int main(){
    // declaração de variáveis carta1
    char estado[3], codigoCarta[3], nomeCidade[100] ;
    unsigned long int populacao; // Alterado para unsigned long 
    int numeroPontosturisticos;
    float area, pib, densidadePopulacional, pibPerCapita, superPoder;

    // declaração de variáveis carta2
    char estado2[3], codigoCarta2[3], nomeCidade2[100] ;
    unsigned long int populacao2; // Alterado para unsigned long int
    int numeroPontosturisticos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2, superPoder2 ;

    // coleta de informações primeira carta
    printf("Cadastre carta 1: \n");
    printf("Cadastre o estado: \n");
    scanf("%2s", &estado); // ler a sigla 2 digitos
    printf("Cadastre codigo: \n");
    scanf("%2s", &codigoCarta); // ler o codigo 2 digitos
    printf("Cadastre o nome da Cidade: \n");
    scanf("%s", nomeCidade);
    printf("Populacao: \n");
    scanf("%lu", &populacao); // Alterado para unsigned long int
    printf("Area Km2: \n");
    scanf("%f", &area);
    printf("Pib: \n");
    scanf("%f", &pib);
    printf("Numero de pontos turisticos: \n");
    scanf("%d", &numeroPontosturisticos);
    printf("\n");

    // coleta de informações segunda carta

    printf("Cadastre carta 2: \n");
    printf("Cadastre o estado: \n");
    scanf("%2s", &estado2); // ler a sigla 2 digitos
    printf("Cadastre codigo: \n");
    scanf("%2s", &codigoCarta2); // ler a codigo 2 digitos
    printf("Cadastre o nome da Cidade: \n");
    scanf("%s", nomeCidade2);
    printf("Populacao: \n");
    scanf("%lu", &populacao2); // Alterado para unsigned long int
    printf("Area Km2: \n");
    scanf("%f", &area2);
    printf("Pib: \n");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: \n");
    scanf("%d", &numeroPontosturisticos2);

    // Calculando a densidade populacional e PIB per capita para carta 1
    densidadePopulacional = (float)populacao / area;
    pibPerCapita = pib / populacao;

    // Calculando a densidade populacional e PIB per capita para carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Calculando o Super Poder para cada carta 
    // somando os atributos,  densidade usamos o inverso de densidade populaconal = area / população
    // para que quanto menor a densidade, maior o poder.
    superPoder = (float)populacao + area + pib + numeroPontosturisticos + pibPerCapita + (area /(float)populacao);
    superPoder2 = (float)populacao2 + area2 + pib2 + numeroPontosturisticos2 + pibPerCapita2 + (area2 /(float)populacao2);


    // apresentndo os resultados carta 1

     printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km2\n", area);
    printf("PIB: %.2f Bilhões\n", pib);
    printf("Número de pontos turisticos: %d\n", numeroPontosturisticos);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);
    printf("Super Poder: %.2f\n", superPoder);
    printf("\n");

    // apresentndo os resultados carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f Bilhões\n", pib2);
    printf("Número de pontos turisticos: %d\n", numeroPontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    printf("\n");

    // comparação de Cartas ---
    printf("Comparacao de Cartas \n");
    printf("1 Vencedor, 0 Perdedor \n");
    printf("\n");

    // Comparando População
    printf("Populacao: Carta 1: %lu é maior que  Carta 2: %lu resultado = %d\n", populacao, populacao2, populacao > populacao2 );

    // Comparando area
    printf("Area km2: Carta 1: %.2f é maior que  Carta 2: %.2f resultado = %d\n", area, area2, area > area2 );

    // Comparando PIB
    printf("PIB: Carta 1: %.2f é maior que Carta 2: %.2f resultado = %d\n", pib, pib2, pib > pib2);

    // Comparando Pontos turisticos
    printf("Pontos turisticos: Carta 1: %d é maior que Carta 2: %d resultado = %d\n", numeroPontosturisticos, numeroPontosturisticos2, numeroPontosturisticos > nomeCidade2 );

    // Comparando Desnsidade populacional
    printf("Densidade populacional: Carta 1: %.2f é maior que Carta 2: %.2f resultado = %d\n", densidadePopulacional, densidadePopulacional2, densidadePopulacional > densidadePopulacional2 );

    // Comparando PIB Percapita
    printf("Pib Percapita: Carta 1: %.2f é maior que  Carta 2: %.2f resultado = %d\n", pibPerCapita, pibPerCapita2, pibPerCapita > pibPerCapita2 );


    // Comparando Super Poder
    printf("Super Podder: Carta 1: %.2f  é maior que Carta 2: %.2fsp resultado = %d\n", superPoder, superPoder2, superPoder > superPoder2 );


    return 0;

}
