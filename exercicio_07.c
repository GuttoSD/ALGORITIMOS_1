/* Esse código pede ao usuário dois pares de números inteiros. 
Depois, ele soma o primeiro par e o segundo par separadamente, e divide a soma do primeiro pelo segundo. 
O resultado da divisão é mostrado com duas casas decimais. */
#include <stdio.h>

   int main() {
    int num_1, num_2, num_3, num_4;
    float resultado;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num_1, &num_2);
    printf("Digite mais dois numeros inteiros: ");
    scanf("%d %d", &num_3, &num_4);

    resultado = (num_1 + num_2) / (float)(num_3 + num_4); 
    printf("O resultado da divisao é: %.2f\n", resultado);
}
