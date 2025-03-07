#include <stdio.h>

    int main(){

    // Declarando variáveis;

    char estado;
    char codigoCarta[10];
    char nomeCidade[15];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    // Lendo dados da carta 1;
 
    printf("*** Digite os dados da carta 1 ***\n");

    printf("\n- Digite uma letra de 'A' a 'H' para representar o estado.\n");
    scanf("%c", &estado);

    // Imprimindo os dados da carta 1;

    printf("Carta 1:");
    
    printf("Estado: %c", estado);


    return 0;
}