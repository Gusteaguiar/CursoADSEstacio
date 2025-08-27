#include<stdio.h>

int main(){
    int n1, n2, n3, soma;
    float media;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &n1);

    printf("Digite o segundo numero:\n");
    scanf("%d", &n2);

    printf("Digite o terceiro numero:\n");
    scanf("%d", &n3);

    // O cálculo da soma deve vir antes da divisão para a média.
//o scanf nao entra na soma pois ele é usado apenas para ler os valores do usuario para o programa. 
//o que é feito no programa nao precisa do scanf
    soma = n1 + n2 + n3;
    
    // O cálculo da média é a soma dividida por 3.
    // É importante usar (float) para garantir que a divisão seja de ponto flutuante,
    // o que permite resultados com casas decimais.
    media = (float) soma / 3;

    // Apenas imprima a soma e a média calculadas.
    // Não é necessário usar 'scanf' para ler esses valores.
    printf("A soma dos numeros e: %d\n", soma);
    printf("A media dos numeros e: %.2f\n", media);

    return 0;
}