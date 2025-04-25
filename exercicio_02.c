/* Esse código pede para o usuário digitar sua altura e compara com a altura média nacional (1.70 metros). 
Depois, ele mostra uma mensagem dizendo se a altura da pessoa é maior, menor ou igual à média nacional. */

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
