/* Esse código recebe três valores digitados pelo usuário e verifica se eles podem formar um triângulo. 
Se sim, ele identifica qual tipo de triângulo é: equilátero (todos os lados iguais), isósceles (dois lados iguais) ou escaleno (todos diferentes). 
Caso os valores não obedeçam à condição necessária para formar um triângulo, ele avisa que não se trata de um triângulo.
É um código simples e direto pra entender a lógica básica dos tipos de triângulos.*

#include <stdio.h>

   int main (void){
   
    float lado_a,lado_b,lado_c;

    printf("Digite os valores a,b e c de um triângulo:\n");
    
    scanf("%f %f %f",&lado_a, &lado_b, &lado_c);
    
    if (lado_b+lado_c>lado_a && lado_a+lado_c>lado_b && lado_a+lado_b>lado_c){
     if (lado_a == lado_b && lado_b == lado_c){
        printf(" É um triângulo equilátero \n");
     }

     else 
     
     if (lado_a == lado_b || lado_a == lado_c || lado_b == lado_c){
        printf("É um triângulo isóceles \n");
     }
     
     else{
        printf("É um triângulo escaleno \n");
     }
     
    }

    else{
     printf("Não se trata de um triângulo \n");
    }

  return 0;     

}
