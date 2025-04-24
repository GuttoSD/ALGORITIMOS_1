// Exercício 5: Calcular a fórmula de Bhaskara
#include <stdio.h>
#include <math.h>

   int main() {
    float a, b, c, delta, raiz1, raiz2;

    printf("Digite os valores de a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    delta = (b * b) - (4 * a * c);

    if (delta < 0) {
        printf("Nao existem raizes reais.\n");
    } else {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);

        printf("As raizes sao: %.2f e %.2f\n", raiz1, raiz2);
    }
}
