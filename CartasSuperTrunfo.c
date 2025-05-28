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
    densidadeInvertida = area / populacao; // Inverso da densidade populacional

    // Calculando a densidade populacional e PIB per capita para carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2/ (float) populacao2;
    densidadeInvertida2 = area2 /(float) populacao2; // Inverso da densidade populacional 2

    // Calculando o Super Poder para cada carta 
    // somando os atributos,  densidade usamos o inverso de densidade populaconal = area / população
    // para que quanto menor a densidade, maior o poder.
    superPoder = (float)populacao + area + pib + numeroPontosturisticos + pibPerCapita + densidadeInvertida;
    superPoder2 = (float)populacao2 + area2 + pib2 + numeroPontosturisticos2 + pibPerCapita2 + densidadeInvertida2;
    


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
    // inclusao do menu 
    // comparação de 2 atributos
   printf("Escolha o primeiro atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área Km²\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    scanf("%d", &opcao);

    printf("Escolha o segundo atributo (diferente do primeiro):\n");
    scanf("%d", &opcao2);

    if (opcao == opcao2) {
        printf("O segundo atributo não pode ser igual ao primeiro! Escolha novamente.\n");
        scanf("%d", &opcao2);
    }

    // Exibição dos vencedores por atributo utilizando if else
    printf("\nResultados:\n");

    // Comparação do primeiro atributo
    printf("-- Comparação de atributo %d --\n", opcao);

    if (opcao == 1) {
        valor1 = populacao; valor2 = populacao2;
    } else if (opcao == 2) {
        valor1 = area; valor2 = area2;
    } else if (opcao == 3) {
        valor1 = pib; valor2 = pib2;
    } else if (opcao == 4) {
        valor1 = numeroPontosturisticos; valor2 = numeroPontosturisticos2;
    } else if (opcao == 5) {
        valor1 = densidadeInvertida; valor2 = densidadeInvertida2; // Usar densidade invertida aqui
    } else if (opcao == 6) {
        valor1 = pibPerCapita; valor2 = pibPerCapita2;
    } else if (opcao == 7) {
        valor1 = superPoder; valor2 = superPoder2;
    }

    printf("Carta 1 - %s (%s): %.2f\n", nomeCidade, estado, valor1);
    printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, valor2);

    if (valor1 > valor2) {
        printf("Vencedor: %s\n\n", nomeCidade);
    } else if (valor2 > valor1) { // Adicionado para cobrir o caso onde valor2 é maior que valor1
        printf("Vencedor: %s\n\n", nomeCidade2);
    } else {
        printf("Empate!\n\n");
    }

    // Comparação do segundo atributo
    printf("-- Comparação de atributo %d --\n", opcao2);

    if (opcao2 == 1) {
        valor1 = populacao; valor2 = populacao2;
    } else if (opcao2 == 2) {
        valor1 = area; valor2 = area2;
    } else if (opcao2 == 3) {
        valor1 = pib; valor2 = pib2;
    } else if (opcao2 == 4) {
        valor1 = numeroPontosturisticos; valor2 = numeroPontosturisticos2;
    } else if (opcao2 == 5) {
        valor1 = densidadeInvertida; valor2 = densidadeInvertida2; // Usar densidade invertida aqui
    } else if (opcao2 == 6) {
        valor1 = pibPerCapita; valor2 = pibPerCapita2;
    } else if (opcao2 == 7) {
        valor1 = superPoder; valor2 = superPoder2;
    }

    printf("Carta 1 - %s (%s): %.2f\n", nomeCidade, estado, valor1);
    printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, valor2);

  
    // A lógica de "menor vence" para densidade já está tratada usando densidadeInvertida.
    
    if (valor1 > valor2) {
        printf("Vencedor: %s\n\n", nomeCidade);
    } else if (valor2 > valor1) { 
        printf("Vencedor: %s\n\n", nomeCidade2);
    } else {
        printf("Empate!\n\n");
    }
    // Comparação usando switch case

    switch (opcao) {
        case 1: soma1 += populacao; soma2 += populacao2; break;
        case 2: soma1 += area; soma2 += area2; break;
        case 3: soma1 += pib; soma2 += pib2; break;
        case 4: soma1 += numeroPontosturisticos; soma2 += numeroPontosturisticos2; break;
        case 5: soma1 += (densidadePopulacional < densidadePopulacional2) ? densidadePopulacional : densidadePopulacional2; break;
        case 6: soma1 += pibPerCapita; soma2 += pibPerCapita2; break;
        case 7: soma1 += superPoder; soma2 += superPoder2; break;
    }

    switch (opcao2) {
        case 1: soma1 += populacao; soma2 += populacao2; break;
        case 2: soma1 += area; soma2 += area2; break;
        case 3: soma1 += pib; soma2 += pib2; break;
        case 4: soma1 += numeroPontosturisticos; soma2 += numeroPontosturisticos2; break;
        case 5: soma1 += (densidadePopulacional < densidadePopulacional2) ? densidadePopulacional : densidadePopulacional2; break;
        case 6: soma1 += pibPerCapita; soma2 += pibPerCapita2; break;
        case 7: soma1 += superPoder; soma2 += superPoder2; break;
    }

    // Exibição dos resultados da somas dos atributos
    printf("\nResultados:\n");
    printf("Carta 1 - %s (%s): Soma dos atributos: %.2f\n", nomeCidade, estado, soma1);
    printf("Carta 2 - %s (%s): Soma dos atributos: %.2f\n", nomeCidade2, estado2, soma2);

    // Determinar vencedor
    if (soma1 > soma2) {
        printf("Vencedor: %s\n", nomeCidade);
    } else if (soma2 > soma1) {
        printf("Vencedor: %s\n", nomeCidade2);
    } else {
        printf("Empate!\n");
    }
   

    return 0;

}
