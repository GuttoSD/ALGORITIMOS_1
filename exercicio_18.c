// Exercício 18: Responder ao usuário quando digitar 'o' com a letra 'e'
#include <stdio.h>

   int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    if (letra == 'o' || letra == 'O') {
        printf("Você digitou 'o'. Resposta: 'e'.\n");
    } else {
        printf("Você digitou outra letra.\n");
    }
}
