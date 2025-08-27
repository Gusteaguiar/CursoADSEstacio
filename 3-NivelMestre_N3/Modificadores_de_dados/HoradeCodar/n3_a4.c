//Você aplicará conceitos de modificadores de tipos de dados e operadores relacionais 
//para desenvolver um sistema de gerenciamento de inventário.
//Você implementará funcionalidades que permitem comparações entre diferentes produtos, 
//como quantidade em estoque e valor total, utilizando operadores relacionais sem estruturas de controle.

#include <stdio.h>
int main(){
    //declarar variáveis do produto, 
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 1000;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    //exibir informações dos produtos
    printf("Produto %s tem estoque %u  e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("\nProduto %s tem estoque %u  e o valor unitário é R$ %.2f\n", produtoB, estoqueB, valorB); 

    //Comparaçoes com o valor mínimo de estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque mínimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque mínimo %d\n", produtoB, resultadoB);

    //comparaçao entre os valores totais dos produtos
    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)?: %d\n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));

       return 0;
}

