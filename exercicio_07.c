// Exercício 7: Somar dois pares de números e dividir o resultado
#include <stdio.h>

   int main() {
    int a, b, c, d;
    float resultado;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    printf("Digite mais dois numeros inteiros: ");
    scanf("%d %d", &c, &d);

    resultado = (a + b) / (float)(c + d); 
    printf("O resultado da divisao é: %.2f\n", resultado);
}
