// Exercício 20: Receber 3 caracteres e retorná-los em ordem alfabética
#include <stdio.h>

   int main() {
    char a, b, c;

    printf("Digite 3 caracteres: ");
    scanf(" %c %c %c", &a, &b, &c);

    if (a > b) { 
        char temp = a; a = b; b = temp; }
    if (b > c) {
        char temp = b; b = c; c = temp; }
    if (a > b) { 
        char temp = a; a = b; b = temp; }

    printf("Caracteres em ordem alfabetica: %c %c %c\n", a, b, c);
}
