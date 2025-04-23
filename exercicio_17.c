// Exercício 17: Receber 5 números inteiros e ordená-los de forma crescente
#include <stdio.h>

   int main() {
    int nums[5], i, j, temp;

    printf("Digite 5 numeros inteiros: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (nums[i] > nums[j]) {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    printf("Numeros em ordem crescente: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}
