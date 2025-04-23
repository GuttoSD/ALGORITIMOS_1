// Exercício 19: Multiplicar dois números reais e garantir que o resultado seja inteiro
#include <stdio.h>

   int main() {
    float a, b;

    printf("Digite dois numeros reais: ");
    scanf("%f %f", &a, &b);

    int resultado = (int)(a * b); // Converter o resultado para inteiro
    printf("O resultado da multiplicacao, convertido para inteiro, é: %d\n", resultado);
}
