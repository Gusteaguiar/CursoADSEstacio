#include <stdio.h>
/*
Atribuição simples(=)
Atribuição com Soma(+=)
Atribuiçao com Subtração(-=)
Atribuição com Multiplicação(*=)
Atribuição com Divisão(/=)
*/
int main() {
int numero1=10, numero2, resultado;
resultado = 10;
printf("Resultado: %d\n", resultado);

//resultado = resultado +20
resultado +=20;
printf("Resultado após +=: %d\n", resultado);

//resultado=resultado-numero1
resultado -=numero1;
printf("Resultado após -=: %d\n", resultado);

//resultado=resultado*5
resultado *=5;
printf("Resultado após *=: %d\n", resultado);

//resultado=resultado/2
resultado /=2;
printf("Resultado após /=: %d\n", resultado);

return 0;

}