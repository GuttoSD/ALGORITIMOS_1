/* O código recebe o valor de duas resistências em paralelo e calcula a resistência equivalente.  
A fórmula usada é 1 / ((1 / r1) + (1 / r2)), que é a fórmula para resistores em paralelo.  
O valor da resistência equivalente é então exibido em ohms. */

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
