#include <stdio.h>

int main(){
    //Criando as variáveis
    char estado, codigo[4], cidade[50];
    int populacao, pontos_turisticos, c;
    float area_em_km_quadrado, pib;
    float densidade_populacional, pib_per_capita;

    //Começa a digitação da primeira carta.
    printf("Digite o estado da primeira carta: \n");
    scanf("%c%*c", &estado);

    printf("Digite o código da primeira carta: \n");
    fgets(codigo, 4, stdin);  //Adicionando um código que ler o string junto com espaço.
    while ((c = getchar()) != '\n' && c != EOF); //Limpeza do buffer.
    
    printf("Digite o nome da cidade da primeira carta: \n");
    fgets(cidade, 50, stdin);
    
    printf("Digite a população da primeira carta: \n");
    scanf("%d", &populacao);

    printf("Digite a área (em km²) da primeira carta: \n");
    scanf("%f", &area_em_km_quadrado);

    printf("Digite a PIB (em bilhões) da primeira carta: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da primeira carta: \n");
    scanf("%d", &pontos_turisticos);

    //Calculando a densidade Populacional
    densidade_populacional = (float) populacao / area_em_km_quadrado;

    //Calculando o PIB perCapita
    pib_per_capita = pib * 1000000000 / populacao;

    //Mostrar as informações da primeira carta que foram digitados.
    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area_em_km_quadrado);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);


    //Começa a digitação da segunda carta.(mesma orden da primeira)
    printf("\n");
    printf("Digite o estado da segunda carta: \n");
    scanf("%c%*c", &estado);

    printf("Digite o código da segunda carta: \n");
    fgets(codigo, 4, stdin);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Digite o nome da cidade da segunda carta: \n");
    fgets(cidade, 50, stdin); //Adicionando o código que ler o string inteiro.

    printf("Digite a população da segunda carta: \n");
    scanf("%d", &populacao);

    printf("Digite a área (em km²) da segunda carta: \n");
    scanf("%f", &area_em_km_quadrado);

    printf("Digite a PIB (em bilhões) da segunda carta: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da segunda carta: \n");
    scanf("%d", &pontos_turisticos);

    densidade_populacional = (float) populacao / area_em_km_quadrado;

    pib_per_capita = pib * 1000000000 / populacao;

    //Mostrar as informações da segunda carta que foram digitados.
    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area_em_km_quadrado);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);
    return 0;
}
