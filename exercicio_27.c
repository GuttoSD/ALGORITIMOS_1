// Exercício 27: Receber um valor em float e retornar um inteiro
#include <stdio.h>

   int main() {
    float valor;

    printf("Digite um valor em float: ");
    scanf("%f", &valor);

    int resultado = (int)valor; // Convertendo para inteiro
    printf("O valor convertido para inteiro é: %d\n", resultado);
}
