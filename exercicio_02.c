// Exercício 2: Identificar se a altura do usuário é maior ou menor da altura média nacional
#include <stdio.h>

  int main() {
    float altura;
    float alturaMedia = 1.70;

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    if (altura > alturaMedia) {
        printf("Sua altura é maior que a media nacional.\n");
    } else if (altura < alturaMedia) {
        printf("Sua altura é menor que a media nacional.\n");
    } else {
        printf("Sua altura é igual a media nacional.\n");
    }
}
