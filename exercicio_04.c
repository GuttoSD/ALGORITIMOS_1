// Exercício 4: Mostrar os anos bissextos dentro do intervalo
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
