// Exercício 16: Entrada das 3 dimensões de um objeto (em metros)
#include <stdio.h>

   int main() {
    float comprimento, largura, altura;

    printf("Digite o comprimento, largura e altura em metros: ");
    scanf("%f %f %f", &comprimento, &largura, &altura);

    printf("As dimensoes sao: Comprimento: %.2f, Largura: %.2f, Altura: %.2f\n", comprimento, largura, altura);
}
