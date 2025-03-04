#include <stdio.h>

int main(){
    //Criando as variáveis
    char estado, codigo[4], cidade[50];
    int populacao, pontos_turisticos, c;
    float area_em_km_quadrado, pib;
    float densidade_populacional, pib_per_capita;
    unsigned long int super_poder_carta1, super_poder_carta2, comparacao_super_poder;
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area_em_km_quadrado1, area_em_km_quadrado2, pib1, pib2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    int comparacao_populacao, comparacao_pontos_turisticos;
    int comparacao_area, comparacao_pib, comparacao_densidade_populacional, comparacao_pib_per_capita;

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

    //Guardando os valores nos variáveis que foram digitados, para puder comparar depois.
    populacao1 = populacao;
    area_em_km_quadrado1 = area_em_km_quadrado;
    pib1 = pib;
    pontos_turisticos1 = pontos_turisticos;
    densidade_populacional1 = densidade_populacional;
    pib_per_capita1 = pib_per_capita;

    //Calculando o Super Poder
    super_poder_carta1 = (float) populacao + area_em_km_quadrado + pib + pontos_turisticos + 1 / pib_per_capita;

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

    populacao2 = populacao;
    area_em_km_quadrado2 = area_em_km_quadrado;
    pib2 = pib;
    pontos_turisticos2 = pontos_turisticos;
    densidade_populacional2 = densidade_populacional;
    pib_per_capita2 = pib_per_capita;

    super_poder_carta2 = (float) populacao + area_em_km_quadrado + pib + pontos_turisticos + 1 / pib_per_capita;

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

    //Comparando os valores das duas cartas.
    comparacao_populacao = populacao1 > populacao2;
    comparacao_area = area_em_km_quadrado1 > area_em_km_quadrado2;
    comparacao_pib = pib1 > pib2;
    comparacao_pontos_turisticos = pontos_turisticos1 > pontos_turisticos2;
    comparacao_densidade_populacional = densidade_populacional1 < densidade_populacional2;
    comparacao_pib_per_capita = pib_per_capita1 > pib_per_capita2;
    comparacao_super_poder = super_poder_carta1 > super_poder_carta2;
    
    //Mostrar o resultado das comparações das duas cartas.
    printf("\n");
    printf("Comparação de Cartas (valor 1 significa que venceu e o valor 0 signifaca que perdeu):\n");
    printf("População: Carta1 (%d)\n", comparacao_populacao);
    printf("Área: Carta1 (%d)\n", comparacao_area);
    printf("PIB: Carta1 (%d)\n", comparacao_pib);
    printf("Pontos Turísticos: Carta1 (%d)\n", comparacao_pontos_turisticos);
    printf("Densidade Populacional: Carta1 (%d)\n", comparacao_densidade_populacional);
    printf("PIB per Capita: Carta1 (%d)\n", comparacao_pib_per_capita);
    printf("Super Poder: Carta1 (%d)\n", comparacao_super_poder);
    return 0;
}
