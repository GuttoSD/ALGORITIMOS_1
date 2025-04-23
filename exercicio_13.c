// Exercício 13: Calcular a idade em meses
#include <stdio.h>

   int main() {
    int dia, mes, ano, idadeEmAnos, idadeEmMeses;

    printf("Digite sua data de nascimento (dia, mes, ano): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    printf("Digite o ano atual: ");
    scanf("%d", &idadeEmAnos);

    idadeEmMeses = (idadeEmAnos - ano) * 12 + (12 - mes);

    printf("Sua idade em meses é: %d\n", idadeEmMeses);
}
