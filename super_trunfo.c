#include <stdio.h>

    int main(){


    // Declarando variáveis;


    char estado1[20], estado2[20];
    char codigoCarta[10];
    char nomeCidade1[15], nomeCidade2[15];
    unsigned int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;


    // Lendo dados da carta 1;
 

    printf("*** Digite os dados da carta 1 ***\n");

    printf("\n- Digite o nome de um estado (simples, sem espaços ou hífens).\n");
    printf("Estado: ");
    scanf("%s", estado1);

    printf("\n- Digite uma letra de 'A' a 'H' para representar o estado seguida de um número de 01 a 04 para representar a cidade (ex: A01, B03).\n");
    printf("Código: ");
    scanf("%s", codigoCarta);

    printf("\n- Digite o nome da cidade (simples, sem espaços ou hífens).\n");
    printf("Cidade: ");
    scanf("%s", nomeCidade1);

    printf("\n- Digite a população da cidade escolhida.\n");
    printf("População: ");
    scanf("%u", &populacao1);

    printf("\n- Digite a área da cidade escolhida (em km²).\n");
    printf("Área: ");
    scanf("%f", &area1);

    printf("\n- Digite o PIB (Produto Interno Bruto) da cidade escolhida.\n");
    printf("PIB: ");
    scanf("%f", &pib1);

    printf("\n- Digite quantos Pontos Turísticos tem a cidade escolhida.\n");
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    (densidadePopulacional1 = (float)populacao1 / area1);
    (pibPerCapita1 = (float)pib1 / (float)populacao1);

    float inversoDensidade = 1.0/densidadePopulacional1;

    (superPoder1 = (float)populacao1 + (float)area1 + (float)pib1 + (float)pontosTuristicos1 + (float)pibPerCapita1 + (float)inversoDensidade);


    // Imprimindo os dados da carta 1;


    printf("\nCarta 1:\n");
    
    printf("Estado: %s\n", estado1);

    printf("Código da Carta: %s\n", codigoCarta);

    printf("Nome da Cidade: %s\n", nomeCidade1);

    printf("População: %u\n", populacao1);

    printf("Área: %.2f km²\n", area1);

    printf("PIB: %.2f Bilhões de reais\n", pib1);

    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);

    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);

    printf("Super Poder: %.2f\n", superPoder1);


    // Lendo dados da carta  2;


    printf("\n\n*** Digite os dados da carta 2 ***\n\n");

    printf("- Digite o nome de um estado (simples, sem espaços ou hífens).\n");
    printf("Estado: ");
    scanf("%s", estado2);

    printf("\n- Digite uma letra de 'A' a 'H' para representar o estado seguida de um número de 01 a 04 para representar a cidade (ex: A01, B03).\n");
    printf("Código: ");
    scanf("%s", codigoCarta);

    printf("\n- Digite o nome da cidade (simples, sem espaços ou hífens).\n");
    printf("Cidade: ");
    scanf("%s", nomeCidade2);

    printf("\n- Digite a população da cidade escolhida.\n");
    printf("População: ");
    scanf("%u", &populacao2);

    printf("\n- Digite a área da cidade escolhida (em km²).\n");
    printf("Área: ");
    scanf("%f", &area2);

    printf("\n- Digite o PIB (Produto Interno Bruto) da cidade escolhida.\n");
    printf("PIB: ");
    scanf("%f", &pib2);

    printf("\n- Digite quantos Pontos Turísticos tem a cidade escolhida.\n");
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    (densidadePopulacional2 = (float)populacao2 / area2);
    (pibPerCapita2 = (float)pib2 / (float)populacao2);

    (superPoder2 = (float)populacao2 + (float)area2 + (float)pib2 + (float)pontosTuristicos2 + (float)pibPerCapita2 + (float)inversoDensidade);

 
    // Imprimindo dados da carta 2;


    printf("\nCarta 2: \n");

    printf("Estado: %s\n", estado2);

    printf("Código da Carta: %s\n", codigoCarta);

    printf("Nome da Cidade: %s\n", nomeCidade2);

    printf("População: %u\n", populacao2);

    printf("Área: %.2f km²\n", area2);

    printf("PIB: %.2f Bilhões de reais\n", pib2);

    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);

    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    printf("Super Poder: %.2f\n", superPoder2);


    // Comparação das cartas;


    printf("\n\n** Comparação das Cartas **\n\n");

    int resultadoPopulacao = populacao1 > populacao2;
    printf("População: Carta 1 venceu (%d)\n", resultadoPopulacao);
    
    int resultadoArea = area1 > area2;
    printf("Área: Carta 1 venceu (%d)\n", resultadoArea);

    int resultadoPib = pib1 > pib2;
    printf("PIB: Carta 1 venceu (%d)\n", resultadoPib);
    
    int resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultadoPontosTuristicos);

    int resultadoDensidade = densidadePopulacional1 > densidadePopulacional2;
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", resultadoDensidade);

    int resultadoPibPerCapita = pibPerCapita1 > pibPerCapita2;
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadoPibPerCapita);

    int resultadoSuperPoder = superPoder1 > superPoder2;
    printf("Super Poder: Carta 1 venceu (%d)\n", resultadoSuperPoder);


    //comparação dos atributos;

    int opcao;

    printf("\n\n** Comparação de Atributo das Cartas **\n\n");

    printf("Escolha um Atributo para fazer a Comparação \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");

    printf("\nEscolha: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:

    printf("\n** Atributo População **\n\n");

    printf("Carta 1 - %s-%s: %u", nomeCidade1, estado1, populacao1);
    printf("\nCarta 2 - %s-%s: %u\n", nomeCidade2, estado2, populacao2);

    if(populacao1 > populacao2)
    {
        printf("Resultado: Carta 1 (%s - %s) Venceu!\n\n", nomeCidade1, estado1);
    } else if (populacao1 < populacao2)
    {
        printf("Resultado: Carta 2 (%s - %s) Venceu!\n\n", nomeCidade2, estado2);
    } else {
        printf("Resultado: Empate!\n\n");
    }
        break;

    case 2:

    printf("\n** Atributo Área **\n\n");

    printf("Carta 1 - %s-%s: %.2f", nomeCidade1, estado1, area1);
    printf("\nCarta 2 - %s-%s: %.2f\n", nomeCidade2, estado2, area2);

    if(area1 > area2)
    {
        printf("Resultado: Carta 1 (%s - %s) Venceu!\n\n", nomeCidade1, estado1);
    } else if (area1 < area2)
    {
        printf("Resultado: Carta 2 (%s - %s) Venceu!\n\n", nomeCidade2, estado2);
    } else {
        printf("Resultado: Empate!\n\n");
    }    
        break;

    case 3:

    printf("\n** Atributo PIB **\n\n");

    printf("Carta 1 - %s-%s: %.2f", nomeCidade1, estado1, pib1);
    printf("\nCarta 2 - %s-%s: %.2f\n", nomeCidade2, estado2, pib2);

    if(pib1 > pib2)
    {
        printf("Resultado: Carta 1 (%s - %s) Venceu!\n\n", nomeCidade1, estado1);
    } else if (pib1 < pib2)
    {
        printf("Resultado: Carta 2 (%s - %s) Venceu!\n\n", nomeCidade2, estado2);
    } else {
        printf("Resultado: Empate!\n\n");
    }
        break;

    case 4:

    printf("\n** Atributo Número de Pontos Turísticos **\n\n");

    printf("Carta 1 - %s-%s: %d", nomeCidade1, estado1, pontosTuristicos1);
    printf("\nCarta 2 - %s-%s: %d\n", nomeCidade2, estado2, pontosTuristicos2);

    if(pontosTuristicos1 > pontosTuristicos2)
    {
        printf("Resultado: Carta 1 (%s - %s) Venceu!\n\n", nomeCidade1, estado1);
    } else if (pontosTuristicos1 < pontosTuristicos2)
    {
        printf("Resultado: Carta 2 (%s - %s) Venceu!\n\n", nomeCidade2, estado2);
    } else {
        printf("Resultado: Empate!\n\n");
    }
        break;

    case 5:

    printf("\n** Atributo Densidade Demográfica **\n\n");

    printf("Carta 1 - %s-%s: %.2f", nomeCidade1, estado1, densidadePopulacional1);
    printf("\nCarta 2 - %s-%s: %.2f\n", nomeCidade2, estado2, densidadePopulacional2);

    if(densidadePopulacional1 < densidadePopulacional2)
    {
        printf("Resultado: Carta 1 (%s - %s) Venceu!\n\n", nomeCidade1, estado1);
    } else if (densidadePopulacional1 > densidadePopulacional2)
    {
        printf("Resultado: Carta 2 (%s - %s) Venceu!\n\n", nomeCidade2, estado2);
    } else {
        printf("Resultado: Empate!\n\n");
    }
        break;

    default:
        printf("Opção Inválida!\n\n");
        break;
    }


    return 0;
}