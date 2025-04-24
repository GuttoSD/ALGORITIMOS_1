// Exercício 23: Calcular a sequência de Fibonacci utilizando memoização
#include <stdio.h>

#define MAX 1000

long long fib[MAX];

long long fibonacci(int n) {
    if (n <= 1) return n;
    if (fib[n] != -1) return fib[n];

    fib[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return fib[n];
}

   int main() {
    int n;

    printf("Digite um numero para calcular a sequencia de Fibonacci: ");
    scanf("%d", &n);

    // Inicializando o vetor de memoização
    for (int i = 0; i < MAX; i++) {
        fib[i] = -1;
    }

    printf("O %d-ésimo número de Fibonacci é: %lld\n", n, fibonacci(n));
}
