#include <stdio.h>

    int main(){


    // Declarando variáveis;


    char estado[20];
    char codigoCarta[10];
    char nomeCidade[15];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;


    // Lendo dados da carta 1;
 

    printf("*** Digite os dados da carta 1 ***\n");

    printf("\n- Digite o nome de um estado (simples, sem espaços ou hífens).\n");
    printf("Estado: ");
    scanf("%s", estado);

    printf("\n- Digite uma letra de 'A' a 'H' para representar o estado seguida de um número de 01 a 04 para representar a cidade (ex: A01, B03).\n");
    printf("Código: ");
    scanf("%s", codigoCarta);

    printf("\n- Digite o nome da cidade (simples, sem espaços ou hífens).\n");
    printf("Cidade: ");
    scanf("%s", nomeCidade);

    printf("\n- Digite a população da cidade escolhida.\n");
    printf("População: ");
    scanf("%d", &populacao);

    printf("\n- Digite a área da cidade escolhida (em km²).\n");
    printf("Área: ");
    scanf("%f", &area);

    printf("\n- Digite o PIB (Produto Interno Bruto) da cidade escolhida.\n");
    printf("PIB: ");
    scanf("%f", &pib);

    printf("\n- Digite quantos Pontos Turísticos tem a cidade escolhida.\n");
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);


    // Imprimindo os dados da carta 1;


    printf("\nCarta 1:\n");
    
    printf("Estado: %s\n", estado);

    printf("Código da Carta: %s\n", codigoCarta);

    printf("Nome da Cidade: %s\n", nomeCidade);

    printf("População: %d\n", populacao);

    printf("Área: %.2f km²\n", area);

    printf("PIB: %.2f Bilhões de reais\n", pib);

    printf("Pontos Turísticos: %d\n", pontosTuristicos);


    // Lendo dados da carta  2;


    printf("\n\n*** Digite os dados da carta 2 ***\n\n");

    printf("- Digite o nome de um estado (simples, sem espaços ou hífens).\n");
    printf("Estado: ");
    scanf("%s", estado);

    printf("\n- Digite uma letra de 'A' a 'H' para representar o estado seguida de um número de 01 a 04 para representar a cidade (ex: A01, B03).\n");
    printf("Código: ");
    scanf("%s", codigoCarta);

    printf("\n- Digite o nome da cidade (simples, sem espaços ou hífens).\n");
    printf("Cidade: ");
    scanf("%s", nomeCidade);

    printf("\n- Digite a população da cidade escolhida.\n");
    printf("População: ");
    scanf("%d", &populacao);

    printf("\n- Digite a área da cidade escolhida (em km²).\n");
    printf("Área: ");
    scanf("%f", &area);

    printf("\n- Digite o PIB (Produto Interno Bruto) da cidade escolhida.\n");
    printf("PIB: ");
    scanf("%f", &pib);

    printf("\n- Digite quantos Pontos Turísticos tem a cidade escolhida.\n");
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);

 
    // Imprimindo dados da carta 2;


    printf("\nCarta 2: \n");

    printf("Estado: %s\n", estado);

    printf("Código da Carta: %s\n", codigoCarta);

    printf("Nome da Cidade: %s\n", nomeCidade);

    printf("População: %d\n", populacao);

    printf("Área: %.2f km²\n", area);

    printf("PIB: %.2f Bilhões de reais\n", pib);

    printf("Pontos Turísticos: %d\n", pontosTuristicos);


    return 0;
}