#include <stdio.h>

int main() {
    //Variaveis dos dados das cartas
    char estado, codigoCarta[3], cidade[20], estado2, codigoCarta2[3], cidade2[20];
    int populacao, pontosTuristicos, populacao2, pontosTuristicos2;
    float area, pib, area2, pib2;

    //Coleta de dados da carta 1
    printf("Digite uma letra de 'A' a 'H'(representando um dos oito estados):\n");
    scanf(" %c", &estado);
    getchar(); //Consome a nova linha
    
    printf("Digite a letra do estado seguida de um numero de 01 a 04 (ex: A01, B03):\n");
    scanf(" %s", codigoCarta);

    printf("Digite o nome da cidade(se caso composto, use apenas o primeiro):\n");
    scanf("%s", cidade);
    
    printf("Digite o numero de habitantes da cidade:\n");
    scanf("%d", &populacao);

    printf("Digite a area da cidade (em km2):\n");
    scanf("%f", &area);

    printf("Digite o Produto Interno Bruto(PIB) da cidade:\n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosTuristicos);

    //Coleta de dados das cartas 2
    printf("Segunda carta:\n");
    printf("Digite uma letra de 'A' a 'H'(representando um dos oito estados):\n");
    scanf(" %c", &estado2);
    getchar(); //Consome a nova linha
    
    printf("Digite a letra do estado seguida de um numero de 01 a 04 (ex: A01, B03):\n");
    scanf(" %s", codigoCarta2);

    printf("Digite o nome da cidade(se caso composto, use apenas o primeiro):\n");
    scanf("%s", cidade2);
    
    printf("Digite o numero de habitantes da cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade (em km2):\n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto(PIB) da cidade:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &pontosTuristicos2);

    //Apresentacao das cartas na tela
    printf("Carta 1: \n");
    printf("Estado: %c\nCodigo: %s\nNome da cidade: %s\nPopulacao: %d\nArea: %f\nPIB: %f\nNumero de pontos turisticos: %d", pontosTuristicos, pib, area, estado, codigoCarta, cidade, populacao);
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\nCodigo: %s\nNome da cidade: %s\nPopulacao: %d\nArea: %f\nPIB: %f\nNumero de pontos turisticos: %d", pontosTuristicos2, pib2, area2, estado2, codigoCarta2, cidade2, populacao2);

    return 0;
}
