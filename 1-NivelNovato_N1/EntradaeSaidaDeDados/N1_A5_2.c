#include <stdio.h>
int main() {
    int idade = 25;
    float altura = 1.75;
    char opcao = 'S';
    char nome[20] = "Gustavo";
    
    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura é: %e\n", altura);
    printf("A opção é: %c\n", opcao);
   
    return 0;
/*
printf("%formato1 %formato 2 %formato3", variavel1, variavel 2, varriavel3)
%d: Imprime um inteiro no formado decimal.
%i: Equivalente a %d, imprime um inteiro no formato decimal.
%f: Imprime um número de ponto flutuante no formato decimal.
%e: Imprime um número de ponto flutuante no formato exponencial (notação científica).
%s: Imprime uma string (sequência/cadeia de caracteres).
\n: Nova linha.
%c: Imprime um único caractere. 
*/