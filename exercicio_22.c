// Exercício 22: Calcular a resistência equivalente de dois resistores em paralelo
#include <stdio.h>

   int main() {
    float r1, r2;

    printf("Digite o valor da resistencia do primeiro resistor: ");
    scanf("%f", &r1);
    printf("Digite o valor da resistencia do segundo resistor: ");
    scanf("%f", &r2);

    float resistenciaEquivalente = 1 / ((1 / r1) + (1 / r2));

    printf("A resistencia equivalente dos resistores em paralelo é: %.2f ohms\n", resistenciaEquivalente);
}
