#include <stdio.h>
/*
Incremento (++)
Pré-incremento (++variavel) (++a)
Pós-incremento (variavel++) (a++)
Decremento (--)
Pré-decremento (--variavel) (--a)
Pós-decremento (variavel--) (a--)
*/

int main() {
int numero1= 1;
printf("Número inicial: %d\n", numero1);
// Pós-incremento
//numero1 = numero1 + 1;
//numero1 += 1;
numero1++;
printf("Número após pós-incremento: %d\n", numero1);
//Pós decremento
//numero1 = numero1 - 1;
//numero1 -= 1;
numero1--;
printf("Número após pós-decremento: %d\n", numero1);

return 0;

}