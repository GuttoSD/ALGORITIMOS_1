/* Lê um número real (float) digitado.
Converte o valor para inteiro usando casting.
Exibe o valor já convertido na tela. */

#include <stdio.h>

   int main() {
    float valor;

    printf("Digite um valor em float: ");
    scanf("%f", &valor);

    int resultado = (int)valor; // Convertendo para inteiro
    printf("O valor convertido para inteiro é: %d\n", resultado);
}
