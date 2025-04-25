/* Esse código solicita dois números inteiros ao usuário e verifica se o resto da divisão entre eles é ímpar.  
Primeiro, o programa verifica se o divisor é diferente de zero (para evitar divisão por zero).  
Se a divisão for válida, o resto é calculado e, em seguida, checado para ver se é ímpar (resto % 2 != 0). */

#include <stdio.h>

   int main() {
    int num_1, num_2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num_1, &num_2);

    if (b != 0) {
        int resto = num_1 % num_2;
        if (resto % 2 != 0) {
            printf("O resto da divisao é impar: %d\n", resto);
        } else {
            printf("O resto da divisao nao é impar.\n");
        }
    } else {
        printf("Erro: divisao por zero.\n");
    }
}
