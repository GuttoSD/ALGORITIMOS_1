/* Esse código pede dois números inteiros e realiza a divisão do primeiro pelo segundo.  
Antes de fazer a divisão, ele verifica se o divisor (segundo número) é diferente de zero, para evitar erro.  
Se for zero, mostra uma mensagem de erro. */

#include <stdio.h>

   int main() {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    if (b != 0) {
        printf("O resultado da divisao é: %d\n", a / b);
    } else {
        printf("Erro: divisao por zero.\n");
    }
}
