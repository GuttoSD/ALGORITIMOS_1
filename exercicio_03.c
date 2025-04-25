/* Esse código pede para o usuário digitar três números inteiros. 
Depois que o usuário digita os valores, o programa mostra esses três números na tela, na mesma ordem em que eles foram digitados. 
Serve literalmente para praticar a entrada e saída de dados em C. */

#include <stdio.h>

  int main() {
    int a, b, c;

    printf("Digite 3 numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Os numeros digitados sao: %d, %d, %d\n", a, b, c);
}
