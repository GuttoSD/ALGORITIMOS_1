/* Calcular a sequência de Fibonacci  
Solicita um número ao usuário e exibe o n-ésimo termo */ 

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Digite um numero para calcular a sequencia de Fibonacci: ");
    scanf("%d", &n);

    int resultado = fibonacci(n);

    printf("O %d-ésimo número de Fibonacci é: %d\n", n, resultado);
}
