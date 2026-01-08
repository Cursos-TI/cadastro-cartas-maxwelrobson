#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[50], codigo[50], nome[50], estado2[50], codigo2[50], nome2[50];
  int pontost, pontost2;
  unsigned long int populacao, populacao2;
  float area, pib, densidade, perCapita, area2, pib2, densidade2, perCapita2, superP, superP2;

  // Área para entrada de dados
    printf("Carta 1 \n");

    printf("Digite o Estado: ");
    scanf("%s", estado);

    printf("Digite o Código: ");
    scanf("%s", codigo);

    printf("Digite o nome da Cidade: ");
    getchar();
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';
    
    printf("Digite o número da população: ");
    scanf("%d", &populacao);

    printf("Digite a área em Km²: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontost);



    printf("Carta 2 \n");

    printf("Digite o Estado: ");
    scanf("%s", estado2);

    printf("Digite o Código: ");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade: ");
    getchar();
    fgets(nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    printf("Digite o número da população: ");
    scanf("%d", &populacao2);

    printf("Digite a área em Km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontost2);

  // Área para exibição dos dados da cidade
    printf("\nCarta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("Populaçao: %d\n", populacao);
    printf("Área: %2.f\n", area);
    printf("PIB: %2.f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontost);
    densidade = populacao / area;
    printf("Densidade Populacional: %.2f hab/km² \n", densidade);
    perCapita = pib / populacao;
    printf("PIB per Capita: %.2f reais \n");

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populaçao: %d\n", populacao2);
    printf("Área: %2.f\n", area2);
    printf("PIB: %2.f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontost2);
    densidade2 = populacao2 / area2;
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    perCapita2 = pib2 / populacao2;
    printf("PIB per Capita: %.2f reais \n");

    printf("\nComparação das Cartas: \n");
    printf("População: %d\n", populacao > populacao2);
    printf("Área: %d\n", area > area2);
    printf("PIB: %d\n", pib > pib2);
    printf("Pontos Turísticos: %d\n", pontost > pontost2);
    printf("Densidade Populacional: %d\n", densidade < densidade2);
    printf("PIB per Capita: %d\n", perCapita > perCapita2);
    superP = populacao + area + pib + pontost + perCapita;
    superP2 = populacao2 + area2 + pib2 + pontost2 + perCapita2;
    printf("Super Poder: %d\n", superP > superP2);

    return 0;
} 
