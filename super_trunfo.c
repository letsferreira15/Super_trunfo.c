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

    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (float)pib1 / (float)populacao1;

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

    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (float)pib2 / (float)populacao2;

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

    int opcao1, opcao2;
    float somaAtributo1 = 0, somaAtributo2 = 0;

    printf("\n\n** Comparação de Atributo das Cartas **\n\n");

    printf("Escolha um Atributo para fazer a Comparação \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");

    printf("\nEscolha o Atributo: ");
    scanf("%d", &opcao1);


    switch (opcao1)
    {
    case 1:
        printf("\nVocê escolheu População!\n");
        populacao1 > populacao2 ? 1 : 0;
        populacao2 > populacao1 ? 1 : 0;
        somaAtributo1 += populacao1;
        somaAtributo2 += populacao2;
        break;
    
    case 2:
        printf("\nVocê escolheu Área!\n");
        area1 > area2 ? 1 : 0;
        area2 > area1 ? 1 : 0;
        somaAtributo1 += area1;
        somaAtributo2 += area2;
        break;
    
    case 3:
        printf("\nVocê escolheu PIB!\n");
        pib1 > pib2 ? 1 : 0;
        pib2 > pib1 ? 1 : 0;
        somaAtributo1 += pib1;
        somaAtributo2 += pib2;
        break;

    case 4: 
        printf("\nVocê escolheu Número de Pontos Turísticos!\n");
        pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
        pontosTuristicos2 > pontosTuristicos1 ? 1 : 0;
        somaAtributo1 += pontosTuristicos1;
        somaAtributo2 += pontosTuristicos2;
        break;

    case 5:
        printf("\nVocê escolheu Densidade Demográfica!\n");
        densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
        densidadePopulacional2 < densidadePopulacional1 ? 1 : 0;
        somaAtributo1 += densidadePopulacional1;
        somaAtributo2 += densidadePopulacional2;
        break;

    default:
        printf("\nOpção inválida!\n");
        printf("Tente Novamente.\n");
        break;
    }



    printf("\n\n** Comparação de Atributo das Cartas **\n\n");

    printf("Escolha o segundo Atributo para fazer a Comparação \n");
    printf("OBS: O segundo Atributo não pode ser o mesmo que o primeiro!\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");

    printf("\nEscolha o Atributo: ");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2)
    {
        printf("\nVocê escolheu o mesmo Atributo!\n");
        printf("Escolha outro Atributo!\n");
        return 1;
    }
    else
    {
        switch (opcao2)
        {
        case 1:
            printf("\nVocê escolheu População!\n");
            populacao1 > populacao2 ? 1 : 0;
            populacao2 > populacao1 ? 1 : 0;
            somaAtributo1 += populacao1;
            somaAtributo2 += populacao2;
            break;
        
        case 2:
            printf("\nVocê escolheu Área!\n");
            area1 > area2 ? 1 : 0;
            area2 > area1 ? 1 : 0;
            somaAtributo1 += area1;
            somaAtributo2 += area2;
            break;
        
        case 3:
            printf("\nVocê escolheu PIB!\n");
            pib1 > pib2 ? 1 : 0;
            pib2 > pib1 ? 1 : 0;
            somaAtributo1 += pib1;
            somaAtributo2 += pib2;
            break;

        case 4: 
            printf("\nVocê escolheu Número de Pontos Turísticos!\n");
            pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
            pontosTuristicos2 > pontosTuristicos1 ? 1 : 0;
            somaAtributo1 += pontosTuristicos1;
            somaAtributo2 += pontosTuristicos2;
            break;

        case 5:
            printf("\nVocê escolheu Densidade Demográfica!\n");
            densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
            densidadePopulacional2 < densidadePopulacional1 ? 1 : 0;
            somaAtributo1 += densidadePopulacional1;
            somaAtributo2 += densidadePopulacional2;
            break;

        default:
            printf("\nOpção inválida!\n");
            break;
        }
    }
    

    // Exibir o vencedor;


    printf("\n*** Resultado da Comparação ***\n\n");
    printf("Carta 1: %s - %s\n", estado1, nomeCidade1);
    printf("Carta 2: %s - %s\n", estado2, nomeCidade2);

    printf("\nAtributos escolhidos:\n");
    printf("1º Atributo: %d\n", opcao1);
    printf("2º Atributo: %d\n", opcao2);

    printf("\nResultado da Comparação Individual de cada Atributo:\n");

    printf("1º Atributo: \n");

    if (opcao1 == 1)
    {
        printf("\nPopulação da Carta 1: %u\n", populacao1);
        printf("População da Carta 2: %u\n", populacao2);

        populacao1 > populacao2 ? printf("\nCarta 1 venceu!\n") : printf("\nCarta 2 venceu!\n");
    }
    else if (opcao1 == 2)
    {
        printf("\nÁrea da Carta 1: %.2f km²\n", area1);
        printf("Área da Carta 2: %.2f km²\n", area2);

        area1 > area2 ? printf("\nCarta 1 venceu!\n") : printf("\nCarta 2 venceu!\n");
    }
    else if (opcao1 == 3)
    {
        printf("\nPIB da Carta 1: %.2f Bilhões de reais\n", pib1);
        printf("PIB da Carta 2: %.2f Bilhões de reais\n", pib2);

        pib1 > pib2 ? printf("\nCarta 1 venceu!\n") : printf("\nCarta 2 venceu!\n");
    }
    else if (opcao1 == 4)
    {
        printf("\nNúmero de Pontos Turísticos da Carta 1: %d\n", pontosTuristicos1);
        printf("Número de Pontos Turísticos da Carta 2: %d\n", pontosTuristicos2);

        pontosTuristicos1 > pontosTuristicos2 ? printf("\nCarta 1 venceu!\n") : printf("\nCarta 2 venceu!\n");
    }
    else if (opcao1 == 5)
    {
        printf("\nDensidade Demográfica da Carta 1: %.2f hab/km²\n", densidadePopulacional1);
        printf("Densidade Demográfica da Carta 2: %.2f hab/km²\n", densidadePopulacional2);

        densidadePopulacional1 < densidadePopulacional2 ? printf("\nCarta 1 venceu!\n") : printf("\nCarta 2 venceu!\n");
    }
    

    printf("\n2º Atributo: \n");

    if (opcao2 == 1)
    {
        printf("\nPopulação da Carta 1: %u\n", populacao1);
        printf("População da Carta 2: %u\n", populacao2);

        populacao1 > populacao2 ? printf("\nCarta 1 venceu!\n") : printf("\nCarta 2 venceu!\n");
    }
    else if (opcao2 == 2)
    {
        printf("\nÁrea da Carta 1: %.2f km²\n", area1);
        printf("Área da Carta 2: %.2f km²\n", area2);

        area1 > area2 ? printf("\nCarta 1 venceu!\n") : printf("\nCarta 2 venceu!\n");
    }
    else if (opcao2 == 3)
    {
        printf("\nPIB da Carta 1: %.2f Bilhões de reais\n", pib1);
        printf("PIB da Carta 2: %.2f Bilhões de reais\n", pib2);

        pib1 > pib2 ? printf("\nCarta 1 venceu!\n") : printf("\nCarta 2 venceu!\n");
    }
    else if (opcao2 == 4)
    {
        printf("\nNúmero de Pontos Turísticos da Carta 1: %d\n", pontosTuristicos1);
        printf("Número de Pontos Turísticos da Carta 2: %d\n", pontosTuristicos2);

        pontosTuristicos1 > pontosTuristicos2 ? printf("\nCarta 1 venceu!\n") : printf("\nCarta 2 venceu!\n");
    }
    else if (opcao2 == 5)
    {
        printf("\nDensidade Demográfica da Carta 1: %.2f hab/km²\n", densidadePopulacional1);
        printf("Densidade Demográfica da Carta 2: %.2f hab/km²\n", densidadePopulacional2);

        densidadePopulacional1 < densidadePopulacional2 ? printf("\nCarta 1 venceu!\n") : printf("\nCarta 2 venceu!\n");
    }


    // Exibir a soma dos atributos;


    printf("\n\nSoma dos Atributos:\n\n");

    printf("Carta 1: %.2f\n", somaAtributo1);
    printf("Carta 2: %.2f\n", somaAtributo2);

    if (somaAtributo1 > somaAtributo2) {
        printf("\nResultado: Carta 1 venceu!!\n");
    } else if (somaAtributo1 < somaAtributo2) {
        printf("\nResultado: Carta 2 venceu!!\n");
    } else {
        printf("\nResultado: Empate!\n");
    }   
    

    // Fim do programa;
   
    printf("\n\n** Fim do Programa **\n\n");

    return 0;
}