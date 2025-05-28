#include <stdio.h>

int main(){
    // declaração de variáveis carta1
     char estado[3], codigoCarta[3], nomeCidade[100] ;
    unsigned long int populacao; // Alterado para unsigned long 
    int numeroPontosturisticos, opcao, opcao2;
    float area, pib, densidadePopulacional, densidadeInvertida, pibPerCapita, superPoder, soma1, valor1;

    // declaração de variáveis carta2
    char estado2[3], codigoCarta2[3], nomeCidade2[100] ;
    unsigned long int populacao2; // Alterado para unsigned long int
    int numeroPontosturisticos2;
    float area2, pib2, densidadePopulacional2, densidadeInvertida2, pibPerCapita2, superPoder2, soma2, valor2;

    // coleta de informações primeira carta
    printf("Cadastre carta 1: \n");
    printf("Cadastre o estado: \n");
    scanf("%s", &estado); // ler a sigla 2 digitos
    printf("Cadastre codigo: \n");
    scanf("%s", &codigoCarta); // ler o codigo 2 digitos
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
    scanf("%s", &estado2); // ler a sigla 2 digitos
    printf("Cadastre codigo: \n");
    scanf("%s", &codigoCarta2); // ler a codigo 2 digitos
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
    printf("\n");

    // Inclusao de if else
    // Comparando População 
    printf("--Atributo População--\n");
    printf("Carta 1 - %s ( %s )- Populacao: %lu\n",nomeCidade, estado, populacao);
    printf("Carta 2 - %s ( %s )- Populacao: %lu\n",nomeCidade2, estado2, populacao2);
    if (populacao > populacao2){
         printf("A CARTA 1 - %s - É A VENCEDORA!\n", nomeCidade);
    }else{
        printf("A CARTA 2 - %s - É A VENCEDORA!\n", nomeCidade2);
    }

    // Comparando area
    printf("--Atributo Area Km2--\n");
    printf("Carta 1 - %s ( %s )- Area Km2: %.2f\n",nomeCidade, estado, area);
    printf("Carta 2 - %s ( %s )- Area Km2: %.2f\n",nomeCidade2, estado2, area2);
    if (area > area2){   
         printf("A CARTA 1 - %s - É A VENCEDORA!\n", nomeCidade);
    }else{
        printf("A CARTA 2 - %s - É A VENCEDORA!\n", nomeCidade2);
    }
    
    // Comparando PIB
    printf("--Atributo PIB--\n");
    printf("Carta 1 - %s ( %s )- Pib em R$: %.2f\n",nomeCidade, estado, pib);
    printf("Carta 2 - %s ( %s )- PIb em R$: %.2f\n",nomeCidade2, estado2, pib2);
    if (pib > pib2){
         printf("A CARTA 1 - %s - É A VENCEDORA!\n", nomeCidade);
    }else{
        printf("A CARTA 2 - %s - É A VENCEDORA!\n",nomeCidade2);
    }

    // Comparando Pontos turisticos
    printf("--Atributo Numeros de Pontos Turisticos--\n");
    printf("Carta 1 - %s ( %s )- Numero de pontos turisticos: %d\n",nomeCidade, estado, numeroPontosturisticos);
    printf("Carta 2 - %s ( %s )- Numero de pontos turisticos: %d\n",nomeCidade2, estado2, numeroPontosturisticos2);
    if (numeroPontosturisticos > numeroPontosturisticos2){
          printf("A CARTA 1 - %s - É A VENCEDORA!\n", nomeCidade);
    }else{
        printf("A CARTA 2 - %s - É A VENCEDORA!\n", nomeCidade2);
    }
    
    // Comparando Desnsidade populacional
    printf("--Atributo Densidade Populacional--Menor vence!\n");
    printf("Carta 1 - %s ( %s )- Densidade Populacional: %.2f\n",nomeCidade, estado, densidadePopulacional);
    printf("Carta 2 - %s ( %s )- Densidade Populacional: %.2f\n",nomeCidade2, estado2, densidadePopulacional2);
    if (densidadePopulacional < densidadePopulacional2){
          printf("A CARTA 1 - %s - É A VENCEDORA\n", nomeCidade);
    }else{
        printf("A CARTA 2 - %s - É A VENCEDORA!\n", nomeCidade2);
    }

    // Comparando PIB Percapita
    printf("--Atributo Pib-Percapita!--\n");
    printf("Carta 1 - %s ( %s )- Pib Percapita: %.2f\n",nomeCidade, estado, pibPerCapita);
    printf("Carta 2 - %s ( %s )- Pib Percapita: %.2f\n",nomeCidade2, estado2, pibPerCapita2);
    if (pibPerCapita > pibPerCapita2){
         printf("A CARTA 1 - %s - É A VENCEDORA\n", nomeCidade);
    }else{
        printf("A CARTA 2 - %s - É A VENCEDORA!\n", nomeCidade2);
    }

    // Comparando Super Poder
    printf("--Atributo Super Poder!--\n");
    printf("Carta 1 - %s ( %s )- Super Poder: %.2f\n",nomeCidade, estado, superPoder);
    printf("Carta 2 - %s ( %s )- Super Poder: %.2f\n",nomeCidade2, estado2, superPoder2);
    if (superPoder > superPoder2){
         printf("A CARTA 1 - %s - É A VENCEDORA\n", nomeCidade);
    }else{
        printf("A CARTA 2 - %s - É A VENCEDORA!\n", nomeCidade2);
    }

    return 0;

}
