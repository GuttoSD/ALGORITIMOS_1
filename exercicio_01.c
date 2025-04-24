//Exercício 1: identificar se é um triângulo, e qual seu tipo
#include <stdio.h>

   int main (void){
   
    float a,b,c;

    printf("Digite os 3 valores do triângulo:\n");
    
    scanf("%f %f %f",&a, &b, &c);
    
    if (b+c>a && a+c>b && a+b>c){
     if (a == b && b == c){
        printf(" É um triângulo equilátero \n");
     }

     else 
     
     if (a == b || a == c || b == c){
        printf("É um triângulo isóceles \n");
     }
     
     else{
        printf("É um trinângulo escaleno \n");
     }
     
    }

    else{
     printf("Não se trata de um triângulo \n");
    }

  return 0;     

}