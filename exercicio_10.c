// Exercício 10: Exibir um cardápio e permitir a escolha
#include <stdio.h>

   int main() {
    int opcao;

    printf("Cardapio:\n");
    printf("1. Pizza\n");
    printf("2. X-Tudo\n");
    printf("3. Guaraná\n");
    printf("4. Coca-Cola\n");
    printf("5. Sorvete\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Você escolheu Pizza.\n");
            break;
        case 2:
            printf("Você escolheu X-Tudo.\n");
            break;
        case 3:
            printf("Você escolheu Guaraná.\n");
            break;
        case 4:
            printf("Você escolheu Coca-Cola.\n");
            break;
        case 5:
            printf("Você escolheu Sorvete.\n");
            break;
        default:
            printf("Opcao invalida.\n");
    }
}
