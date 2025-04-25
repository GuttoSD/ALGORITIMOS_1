/* Esse código pede um número inteiro ao usuário e verifica se ele é par ou ímpar.  
Usa o operador de módulo (%) para fazer essa verificação e exibe a resposta na tela.  
É literalmente uma forma "fácil" de trabalhar com condicionais e divisões. */

#include <stdio.h>

   int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero é par.\n");
    } else {
        printf("O numero é impar.\n");
    }
}
