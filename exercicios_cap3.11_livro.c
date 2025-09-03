// Linguagem C: Completa e Descomplicada. André Backes - Exercícios do tópico  3.11

/*1) Faça um programa que leia um número inteiro e retorne seu antecessor e seu su
cessor. */

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int num1;
    printf("1)Insira um numero inteiro:");
    scanf("%d", &num1);
    printf("Antecessor: %d\n", num1 - 1);
    printf("Sucessor: %d\n", num1 + 1);


/*2) Faça um programa que leia um número real e imprima a quinta parte desse número.*/

    float num2;
    printf("\n2)Insira um numero real:");
    scanf("%f", &num2);
    printf("A quinta parte de %.2f eh: %.2f\n", num2, num2 / 5);


/*3) Faça um programa que leia três valores inteiros e mostre sua soma.*/

    int a, b, c;
    printf("\n3)Insira tres numeros inteiros(enter entre eles):");
    scanf("%d %d %d", &a, &b, &c);
    printf("A soma eh: %d\n", a + b + c);


/*4) Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores. */
    float num3, num4, num5, num6;
    printf("\n4)Insira quatro numeros reais(enter entre eles):");
    scanf("%f %f %f %f", &num3, &num4, &num5, &num6);
    printf("A media eh: %.2f\n", (num3 + num4 + num5 + num6) / 4);


/*5) Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua 
idade e do ano atual.*/

    int idade, ano_atual;
    printf("\n5)Insira sua idade:");
    scanf("%d", &idade);
    printf("Insira o ano atual:");
    scanf("%d", &ano_atual);
    printf("Ano de nascimento: %d\n", ano_atual - idade);

/* 6) Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em 
m/s (metros por segundo). A fórmula de conversão é M = K/36, sendo K a velocidade
em km/h e M em m/s.*/

    float kmh;
    printf("\n6)Insira a velocidade em km/h:");
    scanf("%f", &kmh);
    printf("A velocidade em m/s eh: %.2f\n", kmh / 36.0);

/* 7) Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, 
imprima o valor correspondente em dólares.*/

    float reais;
    const float DOLAR = 5.45;
    printf("\n7)Insira o valor em reais:");
    scanf("%f", &reais);
    printf("O valor em dolares eh: %.2f\n", reais / DOLAR);

/* 8)  Leia um valor que represente uma temperatura em graus Celsius e apresente-a
convertida em graus Fahrenheit. A fórmula de conversão é:  F = C * (9.0/5.0) +
32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/

    float celsius;
    printf("\n8)Insira a temperatura em graus Celsius:");
    scanf("%f", &celsius);
    printf("A temperatura em graus Fahrenheit eh: %.2f\n", celsius * (9.0/5.0) + 32.0);


/* 9)  Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de
conversão é R = G * p/180, sendo G o ângulo em graus e R em radianos e p = 3.141592.*/

    float graus,radianos;
    printf("\n9)Insira o angulo em graus:");
    scanf("%f", &graus);
    radianos = graus *  3.141592 / 180.0;
    printf("O angulo em radianos eh: %.6f\n", radianos);

/* 10)  A importância de R$780.000,00 será dividida entre três ganhadores de um concurso, sendo que:
i.  O primeiro ganhador receberá 46% do total.
 ii.  O segundo receberá 32% do total.
 iii. O terceiro receberá o restante.
 Calcule e imprima a quantia recebida por cada um dos ganhadores.*/

    printf("\n10)Distribuicao dos premios:");
    float total = 780000.00;
    float primeiro, segundo, terceiro;

    primeiro = total * 46 / 100;
    segundo = total * 32 / 100;
    terceiro = total - (primeiro + segundo);
    printf("O primeiro ganhador recebera: %.2f\n", primeiro);
    printf("O segundo ganhador recebera: %.2f\n", segundo);
    printf("O terceiro ganhador recebera: %.2f\n", terceiro);

/* 11)  Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspon
dente. A área do círculo é A = p * raio2, sendo p = 3.141592.*/

    float raio;
    printf("\n11)Insira o valor do raio de um circulo:");
    scanf("%f", &raio);
    printf("A area do circulo eh: %.2f\n", 3.141592 * raio * raio);


/*12)  Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro. 
O volume de um cilindro circular é calculado por meio da seguinte fórmula:
 V = p * raio2 * altura,
 em que p = 3.141592*/

    float altura;
    printf("\n12)Insira a altura do cilindro:");
    scanf("%f", &altura);
    printf("O volume do cilindro eh: %.2f\n", 3.141592 * raio * raio * altura);

/* 13)  Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação: 
h = raiz de (a^2 + b^2)
Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa 
através da fórmula dada. Imprima o resultado.*/

    int A, B, H;
    printf("\n13)Insira o valor de a:");
    scanf("%d", &A);
    printf("Insira o valor de b:");
    scanf("%d", &B);
    H = sqrt(A * A + B * B);
    printf("A hipotenusa eh: %d\n", H);

/* 14)  Faça um programa que converta uma letra maiúscula em letra minúscula. Use a 
tabela ASCII para isso.*/

    char letra;
    printf("\n14)Insira uma letra maiuscula:");
    scanf(" %c", &letra);
    if (letra >= 'A' && letra <= 'Z') {
        letra = letra + 32;
        printf("A letra minuscula eh: %c\n", letra);
    } else {
        printf("O caractere inserido nao eh uma letra maiuscula.\n");
    }


/*15)  Faça um programa para ler um número inteiro positivo de três dígitos. 
Em seguida, calcule e mostre o número formado pelos dígitos invertidos do número lido. 
Exemplo: 
Número lido = 123  
Número gerado = 321*/


    int numeroOriginal, digitoCentena, digitoDezena, digitoUnidade, numeroInvertido;

    printf("\n15)Digite um numero inteiro positivo de tres digitos: ");
    scanf("%d", &numeroOriginal);

    if (numeroOriginal < 100 || numeroOriginal > 999) {
        printf("Numero invalido. Por favor, insira um numero de tres digitos.\n");
        return 1;
    }

    digitoUnidade = numeroOriginal % 10;
    digitoDezena = (numeroOriginal / 10) % 10;
    digitoCentena = numeroOriginal / 100;

    numeroInvertido = (digitoUnidade * 100) + (digitoDezena * 10) + digitoCentena;

    printf("O numero invertido eh: %d\n", numeroInvertido);


/*16)  Escreva um programa que leia um número inteiro e mostre a multiplicação e a 
divisão desse número por dois (utilize os operadores de deslocamento de bits).*/

    int num7;
    printf("\n16)Digite um numero inteiro: ");
    scanf("%d", &num7);
    printf("Multiplicacao por 2: %d\n", num7 << 1);
    printf("Divisao por 2: %d\n", num7 >> 1);


 /*17)  Escreva um programa que leia um número inteiro e mostre o seu complemento 
bit a bit.*/

    int num8;
    printf("\n17)Digite um numero inteiro: ");
    scanf("%d", &num8);
    printf("O complemento bit a bit eh: %d\n", ~num8);


/*18)  Elabore um programa que leia dois números inteiros e exiba o deslocamento, à 
esquerda e à direita, do primeiro número pelo segundo.*/

    int numero, posicoes, deslocamento_esquerda, deslocamento_direita;

    printf("\n18)Digite o numero a ser deslocado: ");
    scanf("%d", &numero);

    printf("Digite o numero de posicoes para deslocar: ");
    scanf("%d", &posicoes);

    deslocamento_esquerda = numero << posicoes;

    deslocamento_direita = numero >> posicoes;

    printf("\nDeslocamento de %d bits de %d para a esquerda: %d\n", posicoes, numero, deslocamento_esquerda);
    printf("\nDeslocamento de %d bits de %d para a direita: %d\n", posicoes, numero, deslocamento_direita);



 /*19)  Elabore um programa que leia dois números inteiros e exiba o resultado das
operações de “ou exclusivo”, “ou bit a bit” e “e bit a bit” entre eles.*/

    int num9, num10;
    printf("\n19)Digite dois numeros inteiros(enter entre eles): ");
    scanf("%d %d", &num9, &num10);
    printf("Ou exclusivo: %d\n", num9 ^ num10);
    printf("Ou bit a bit: %d\n", num9 | num10);
    printf("E bit a bit: %d\n", num9 & num10);

    return 0;
}