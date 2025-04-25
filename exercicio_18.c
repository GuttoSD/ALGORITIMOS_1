/* Esse código solicita ao usuário que digite uma letra.  
Se o usuário digitar a letra 'o' (minúscula ou maiúscula), o programa responde com 'e'.  
Caso contrário, ele fala que o usuário digitou uma letra diferente. */

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
