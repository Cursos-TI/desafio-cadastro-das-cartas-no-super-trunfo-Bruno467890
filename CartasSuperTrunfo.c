#include <stdio.h>

int main(){
    //Criando os variáveis
    char estado, codigo[50], cidade[50];
    int populacao, pontos_turisticos;
    float area_em_km_quadrado, pib;

    //Começa a digitação da primeira carta.
    printf("Digite o estado da primeira carta: \n");
    scanf("%c", &estado);

    printf("Digite o código da primeira carta: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade da primeira carta: \n");
    fgets(cidade, 50, stdin); //Adicionando o código que ler o string junto com espaço.
    cidade[strcspn(cidade, "\n")] = 0;
    
    printf("Digite a população da primeira carta: \n");
    scanf("%d", &populacao);

    printf("Digite a área (em km²) da primeira carta: \n");
    scanf("%f", &area_em_km_quadrado);

    printf("Digite a PIB da primeira carta: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da primeira carta: \n");
    scanf("%d", &pontos_turisticos);

    //Mostrar as informações da primeira carta que foram digitados.
    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area_em_km_quadrado);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);

    //Começa a digitação da segunda carta.
    printf("\n");
    printf("Digite o estado da segunda carta: \n");
    scanf("%c", &estado);

    printf("Digite o código da segunda carta: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade da segunda carta: \n");
    fgets(cidade, 50, stdin); //Adicionando o código que ler o string inteiro.
    cidade[strcspn(cidade, "\n")] = 0;

    printf("Digite a população da segunda carta: \n");
    scanf("%d", &populacao);

    printf("Digite a área (em km²) da segunda carta: \n");
    scanf("%f", &area_em_km_quadrado);

    printf("Digite a PIB da segunda carta: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da segunda carta: \n");
    scanf("%d", &pontos_turisticos);

    //Mostrar as informações da segunda carta que foram digitados.
    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area_em_km_quadrado);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    return 0;
}
