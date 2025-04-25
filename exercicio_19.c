/* Esse código pede dois números reais ao usuário e os multiplica.  
O resultado da multiplicação é convertido para inteiro usando a conversão explícita "int". */

#include <stdio.h>

   int main() {
    float num_1, num_2;

    printf("Digite dois numeros reais: ");
    scanf("%f %f", &num_1, &num_2);

    int resultado = (int)(num_1 * num_2); // Converter o resultado para inteiro
    printf("O resultado da multiplicacao, convertido para inteiro, é: %d\n", resultado);
}
