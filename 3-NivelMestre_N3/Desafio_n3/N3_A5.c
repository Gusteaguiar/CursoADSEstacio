#include <stdio.h>
int main() {
    //Variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomecidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    //Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomecidade2[50];
   unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //Leitura dos dados da primeira carta
    printf("Digite o estado da primeira carta (Uma letra de A até H):\n");
    scanf(" %c", &estado1);
    printf("Digite o código da cidade com 3 dígitos (ex:A01, B02, C03):\n");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade (Não deve ter espaços):\n");
    scanf(" %s", nomecidade1);
    printf("Digite a população da cidade:\n");
    scanf(" %d", &populacao1);
    printf("Digite a área da cidade (em km²):\n");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade (em bilhões):\n");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf(" %d", &pontosturisticos1);
    //Leitura dos dados da segunda carta
    printf("Digite o estado da segunda carta (Uma letra de A até H):\n");
    scanf(" %c", &estado2);
    printf("Digite o código da cidade com 3 dígitos (ex:A01, B02, C03):\n");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade (Não deve ter espaços):\n");
    scanf(" %s", nomecidade2);
    printf("Digite a população da cidade:\n");
    scanf(" %d", &populacao2);
    printf("Digite a área da cidade (em km²):\n");
    scanf(" %f", &area2);
    printf("Digite o PIB da cidade (em bilhões):\n");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf(" %d", &pontosturisticos2);

    //cálculo da densidade populacional e pib per capita cidade 1   
    float densidade1 = (float) populacao1 / area1;
    float pibpercapita1 = (float) (pib1 * 1000000000) / populacao1; // Convertendo PIB de bilhões para unidades

    //cálculo da densidade populacional e pib per capita cidade 2
    float densidade2 = (float) populacao2 / area2; 
    float pibpercapita2 = (float) (pib2 * 1000000000) / populacao2; // Convertendo PIB de bilhões para unidades

//cálculo do super poder da carta 1. Somando todos os atributos numéricos:
//população, área, PIB, número de pontos turísticos, PIB per capita e o INVERSO da densidade populacional
    float superpoder1 = (float) populacao1 + area1 + pib1 + pontosturisticos1 + (1/densidade1) + pibpercapita1;

//cálculo do super poder da carta 2
    float superpoder2 = (float) populacao2  + area2 + pib2 + pontosturisticos2 + (1/densidade2) + pibpercapita2;

    //Exibição dos dados da primeira carta
    printf("Dados da primeira carta:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("A densidade populacional é: %.2f habitantes por km²\n", densidade1);
    printf("O PIB per capita é: %.2f reais por habitante\n", pibpercapita1);
    printf("O super poder da carta 1 é: %.2f\n", superpoder1);

    //Exibição dos dados da segunda carta
    printf("Dados da segunda carta:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("A densidade populacional é: %.2f habitantes por km²\n", densidade2);
    printf("O PIB per capita é: %.2f reais por habitante\n", pibpercapita2);    
    printf("O super poder da carta 2 é: %.2f\n", superpoder2);
   
    //Comparação dos atributos das cartas
    printf("Comparação das cartas:\n");
    printf("População: Carta 1 Venceu? %d\n", populacao1 > populacao2);
    printf("Área: Carta 1 Venceu? %d\n", area1 > area2);
    printf("PIB: Carta 1 Venceu? %d\n", pib1 > pib2);
    printf("Pontos turísticos: Carta 1 Venceu? %d\n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade populacional: Carta 1 Venceu? %d\n", densidade1 < densidade2);
    printf("PIB per capita: Carta 1 Venceu? %d\n", pibpercapita1 > pibpercapita2);
    printf("Super poder: Carta 1 Venceu? %d\n", superpoder1 > superpoder2);
    
     return 0;
}