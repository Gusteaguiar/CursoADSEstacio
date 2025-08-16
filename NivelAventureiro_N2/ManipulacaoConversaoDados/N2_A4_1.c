#include  <stdio.h>
int main(){
    int a=10;
    int b=3;
    int soma=a+b;
    int diferença=a-b;
    int produto=a*b;
    int divisao=a/b; //note que a divisão de inteiros resulta em um numero inteiro, o resto aparece no terminal

    printf("Soma: %d\n",soma);
    printf("Diferença: %d\n",diferença);
    printf("Produto: %d\n",produto);
    printf("Divisão: %d\n",divisao);
    return 0;
}
