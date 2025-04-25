/* Esse código usa a fórmula de Bhaskara para encontrar as raízes de uma equação do segundo grau. 
Ele pede os valores de a, b e c, calcula o delta e verifica se é possível ter raízes reais. 
Se o delta for negativo, informa que não há raízes reais; se for positivo ou zero, calcula e mostra as duas raízes. */

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
