/* Esse código recebe 5 números inteiros e os ordena de forma crescente usando o algoritmo de ordenação por troca (bubble sort).  
Após ordenar os números, ele exibe os valores na ordem crescente. */

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
