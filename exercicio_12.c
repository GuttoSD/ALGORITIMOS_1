/* Esse código conta quantas letras o usuário digita até ele digitar '0'.  
Usa a função `getchar()` para ler cada letra, e a variável `contador` é incrementada a cada letra digitada.  
Quando o usuário digita '0', o loop é automaticamente interrompido e o total de letras digitadas é mostrado. */

#include <stdio.h>

   int main() {
    char letra;
    int contador = 0;

    printf("Digite as letras (digite '0' para parar):\n");
    while (1) {
        letra = getchar();
        if (letra == '0') break;
        contador++;
    }

    printf("Voce digitou %d letras.\n", contador);
}
