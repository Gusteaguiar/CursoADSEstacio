#include <stdio.h>

int main() {
    int numero1 = 10.2;
    float numero2 = 10.0;

    printf("numero1 > numero2: %d\n", numero1 > numero2);
    printf("numero1 == numero2: %d\n", numero1 == numero2);

    //printf("numero1 > numero2: %d\n", (int)numero1 > numero2); Conversão explícita, compara só os numeros inteiros    
    //printf("numero1 == numero2: %d\n", (int)numero1 == numero2);
    return 0;
}