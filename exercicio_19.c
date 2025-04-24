//Considere um algoritmo que exiba a temperatura em graus Celsius e Fahrenheit.
#include <stdio.h>

int main() {
    float celsius = 25.0;
    float fahrenheit = (celsius * 9/5) + 32;

    printf("Temperatura: %.1f°C = %.1f°F\n", celsius, fahrenheit);

    return 0;
}
