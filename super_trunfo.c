# include <stdio.h>

int main(){
    char estadoCarta1, estadoCarta2;
    char codigoCarta1[4], codigoCarta2[4];
    char nomeCarta1[30], nomeCarta2[30];
    int populacaoCarta1, populacaoCarta2, turistasCarta1, turistasCarta2;
    float areaCarta1, areaCarta2, pibCarta1, pibCarta2;

    printf("-*******-----*****--*******-\n\n");
    printf("Bem vindo ao Super Trunfo!\n\n");
    printf("-*******-----*****--*******-\n");
    printf("Cadastrando dados da primeira carta...\n");

    printf("Digite o estado da primeira carta: ");
    scanf(" %c", &estadoCarta1);
    printf("Digite o codigo da primeira carta: ");
    scanf("%s", codigoCarta1);

    while (getchar() != '\n' && getchar() != EOF);
    printf("Digite o nome da primeira carta: ");
    fgets(nomeCarta1, 30, stdin);
    printf("Digite a populacao da primeira carta: ");
    scanf("%d", &populacaoCarta1);
    printf("Digite a area da primeira carta: ");
    scanf("%f", &areaCarta1);
    printf("Digite o pib da primeira carta: ");
    scanf("%f", &pibCarta1);
    printf("Digite a quantidade de turistas da primeira carta: ");
    scanf("%d", &turistasCarta1);

    printf("\n\nCadastrando dados da segunda carta...\n");
    printf("Digite o estado da segunda carta: ");
    scanf(" %c", &estadoCarta2);
  
    printf("Digite o codigo da segunda carta: ");
    scanf("%s", codigoCarta2);

    while (getchar() != '\n' && getchar() != EOF);
    printf("Digite o nome da segunda carta: ");
    fgets(nomeCarta2, 30, stdin);
    printf("Digite a populacao da segunda carta: ");
    scanf("%d", &populacaoCarta2);
    printf("Digite a area da segunda carta: ");
    scanf("%f", &areaCarta2);
    printf("Digite o pib da segunda carta: ");
    scanf("%f", &pibCarta2);
    printf("Digite a quantidade de turistas da segunda carta: ");
    scanf("%d", &turistasCarta2);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estadoCarta1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s", nomeCarta1);
    printf("Populacao: %d\n", populacaoCarta1);
    printf("Area: %.2f km^2\n", areaCarta1);
    printf("PIB: %.2f bilhões de reais\n", pibCarta1);
    printf("Número de Pontos Turisticos: %d\n", turistasCarta1);

    printf("\nCarta2:\n");
    printf("Estado: %c\n", estadoCarta2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s", nomeCarta2);
    printf("Populacao: %d\n", populacaoCarta2);
    printf("Area: %.2f km^2\n", areaCarta2);
    printf("PIB: %.2f bilhões de reais\n", pibCarta2);
    printf("Número de Pontos Turisticos: %d\n", turistasCarta2);   

}