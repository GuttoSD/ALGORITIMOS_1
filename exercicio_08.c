/* Esse código solicita ao usuário seu nome, idade, gênero e altura.  
Depois de receber os dados, ele exibe todas as informações na tela.  */

#include <stdio.h>

   int main() {
    char nome[50], genero[10];
    int idade;
    float altura;

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu genero: ");
    scanf("%s", genero);
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    printf("Nome: %s\nIdade: %d\nGenero: %s\nAltura: %.2f\n", nome, idade, genero, altura);
}
