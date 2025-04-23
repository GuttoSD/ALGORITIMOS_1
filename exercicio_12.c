// Exercício 12: Definir número de letras que a pessoa pode escrever
#include <stdio.h>

   int main() {
    char letra;
    int contador = 0;

    printf("Digite as letras (digite '0' para parar):\n");
    while (1) {
        letra = getchar();
        if (letra == '0') break;
        contador++;
    }

    printf("Voce digitou %d letras.\n", contador);
}
