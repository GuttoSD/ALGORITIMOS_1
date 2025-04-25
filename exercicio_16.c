/* Exercício 16: Esse código pede as três dimensões (comprimento, largura e altura) de um objeto em metros.  
Essas dimensões são armazenadas em variáveis do tipo "float" e exibidas com duas casas decimais na tela.  */

#include <stdio.h>

   int main() {
    float comprimento, largura, altura;

    printf("Digite o comprimento, largura e altura em metros: ");
    scanf("%f %f %f", &comprimento, &largura, &altura);

    printf("As dimensoes sao: Comprimento: %.2f, Largura: %.2f, Altura: %.2f\n", comprimento, largura, altura);
}
