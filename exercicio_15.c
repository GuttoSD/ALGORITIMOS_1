/* Esse código pede três números inteiros ao usuário, soma esses números e calcula a média.  
A soma é feita e armazenada em `soma`, e a média é calculada dividindo a soma por 3.0 (para garantir a precisão decimal).  
Os resultados da soma e da média são exibidos na tela. */

#include <stdio.h>

   int main() {
    int num_a, num_b, num_c;

    printf("Digite três numeros inteiros: ");
    scanf("%d %d %d", &num_a, &num_b, &num_c);

    int soma = num_a + num_b + num_c;
    float media = soma / 3.0;

    printf("A soma dos numeros é: %d\n", soma);
    printf("A media dos numeros é: %.2f\n", media);
}
