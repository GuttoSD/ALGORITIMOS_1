/* Esse código pede dois anos ao usuário (um inicial e um final) e mostra todos os anos bissextos dentro desse intervalo. 
Ele usa um laço para verificar cada ano e aplica a regra dos anos bissextos: múltiplos de 4, mas não de 100, exceto se também forem múltiplos de 400. */

#include <stdio.h>

  int main() {
    int anoInicial, anoFinal;

    printf("Digite o ano inicial: ");
    scanf("%d", &anoInicial);
    printf("Digite o ano final: ");
    scanf("%d", &anoFinal);

    printf("Anos bissextos entre %d e %d:\n", anoInicial, anoFinal);
    for (int ano = anoInicial; ano <= anoFinal; ano++) {
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            printf("%d ", ano);
        }
    }
    printf("\n");
}
