#include <stdio.h>
int main(){
    int numeroSinal = 3000000000; //Esse valor excede o limite para um int normal
    unsigned int numeroSemSinal = 3000000000; //Usando unsigned int para armazenar valores maiores
    printf("Número com sinal: %d\n", numeroSinal);
    printf("Número sem sinal: %u\n", numeroSemSinal); //%u para unsigned int
    return 0;
}