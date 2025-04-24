// Exercício 24: Alistamento militar obrigatório
#include <stdio.h>
#include <string.h>

   int main() {
    int idade;
    char sexo[10], possuiDeficiencia[4];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu sexo (masculino/feminino): ");
    scanf("%s", sexo);

    printf("Você possui alguma deficiência grave? (sim/nao): ");
    scanf("%s", possuiDeficiencia);

    if (strcmp(sexo, "masculino") == 0 && idade >= 18 && idade <= 45 && strcmp(possuiDeficiencia, "nao") == 0) {
        printf("Você está apto ao alistamento militar obrigatório.\n");
    } else {
        printf("Você não está apto ao alistamento militar obrigatório.\n");
    }
}
