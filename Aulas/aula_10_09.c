//Aula 10/09
//Criar um programa simulando uma calculadora
/* - O usuário escolhe a opção no menu:
1. 
2.
3.      } Colocar em funçoes
4
- Escolha qual operação vc quer implementar;
- pegar os valores do usaario do uasuário, realizar a chamada da função;
- mostrar o resultado;*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

float funcaocbrt(float x){
    x = cbrt(x);
    return x;
}

float funcaoexp2(float x){
    x = exp2(x);
    return x;
}

float funcaosin(float x){
    x = sin(x);
    return x;
}

float funcaopow(float x, float y){
    x = pow(x,y);
    return x;
}

float main(){
    int opcao;
    float x, y, resultado;

    printf("Escolha a opcao:\n1. Raiz cubica;\n2. Exponencial de base 2;\n3. Seno;\n4. Potencia (x^y);\nEscolha: ");
    scanf("%d", &opcao);
    getchar();

    switch (opcao){

     case 1: 
     printf("Digite o valor de x: ");
     scanf("%f", &x);
     resultado = funcaocbrt(x);
      return printf("O valor da raiz cubica de %.2f eh: %.2f\n", x, resultado);
      break;

    case 2:
      printf("Digite o valor de x: ");
      scanf("%f", &x);
      resultado = funcaoexp2(x);
      return printf("O valor da exponencial de base 2 de %.2f eh: %.2f\n", x, resultado);
      break;
    case 3:
      printf("Digite o valor de x: ");
      scanf("%f", &x);
      resultado = funcaosin(x);
      return printf("O valor do seno de %.2f eh: %.2f\n", x, resultado);
      break;
    case 4:
      printf("Digite o valor de x: ");
      scanf("%f", &x);
      printf("Digite o valor de y: ");
      scanf("%f", &y);
      resultado = funcaopow(x, y);
      return printf("O valor da potencia de %.2f^%.2f eh: %.2f\n", x, y, resultado);
      break;
    default:
      printf("Opcao invalida.\n");
    }
  }
