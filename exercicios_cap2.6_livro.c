// Linguagem C: Completa e Descomplicada. André Backes - Exercícios do tópico 2.6


/* 1) Elabore um programa que escreva as mensagens “Início do programa” e “Fim” na 
tela, uma em cada linha, usando apenas um comando printf(). */

#include<stdio.h>
#include<string.h>

int main() {
    printf("\t1)Inicio do programa\n\tFim");
   

/*2) Escreva um programa que leia um número inteiro e depois o imprima. */

    int num1;
    printf("\n2)Insira um numero inteiro:");
    scanf("%d", &num1);
    printf("%d\n", num1);
    


/*3) Escreva um programa que leia um número inteiro e depois imprima a mensagem 
“Valor lido:”, seguido do valor inteiro. Use apenas um comando printf().*/

    int num2;
    printf("\n3)Insira um numero inteiro:");
    scanf("%d", &num2);
    printf("O valor lido eh: %d\n", num2);
       

/*4) Faça um programa que leia um número inteiro e depois o imprima usando o operador “%f”. Veja o que aconteceu. */

    int num3;
    printf("\n4)Insira um numero inteiro:");
    scanf("%d", &num3);
    printf("%f\n", (float)num3);


/*5) Faça um programa que leia um valor do tipo float e depois o imprima usando o 
operador “%d”. Veja o que aconteceu.*/

float num4;
printf("\n5)Insira um numero do tipo float:");
scanf("%f", &num4);
printf("\n%d", (int)num4);



/*6) Faça um programa que leia um valor do tipo double e depois o imprima na forma 
de notação científica. */

double num5;
printf("\n6)Insira um numero do tipo double:");
scanf("%lf", &num5);
printf("%e\n", num5);


/*7) Elabore um programa que leia um caractere e depois o imprima como um valor 
inteiro. */

char caractere;
printf("\n7)Insira um caractere:");
scanf(" %c", &caractere);
printf("%d\n", caractere);

/*8) Faça um programa que leia dois números inteiros e depois os imprima na ordem 
inversa em que eles foram lidos. */

int num6, num7;
printf("\n8)Insira dois numeros inteiros(enter entre eles):\n");
scanf("%d %d", &num6, &num7);
printf("%d | %d\n", num7, num6);

/*9) Faça um programa que leia dois valores do tipo float. Use um único comando de 
leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles 
foram lidos. */

float num8, num9;
printf("\n9)Insira dois numeros do tipo float(enter entre eles):\n");
scanf("%f %f", &num8, &num9);
printf("%f | %f\n", num9, num8);


/*10) Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano 
(inteiros). Em seguida, imprima os valores lidos separados por uma barra (\). */

int dia, mes, ano;
printf("\n10)Insira o dia, mes e ano(enter entre eles):");
scanf("%d %d %d", &dia, &mes, &ano);
printf("%d / %d / %d\n", dia, mes, ano);


/*11) Elabore um programa que contenha uma constante qualquer do tipo float. Use o 
comando #define. Imprima essa constante. */

#define PI 3.14159
printf("\n11)O valor de PI eh: %f\n", PI);


/*12) Elabore um programa que contenha uma constante qualquer do tipo int. Use o 
comando const. Imprima essa constante. */

const int ANO = 2025;
printf("\n12)O ano atual eh: %d\n", ANO);


/*13) Faça um programa que leia um caractere do tipo char e depois o imprima entre 
aspas duplas. Assim, se o caractere lido for a letra A, deverá ser impresso “A”. */

char caracter1;
printf("\n13)Insira um caractere:");
scanf(" %c", &caracter1);
printf(" \"%c\"  \n", caracter1);


/*14) Faça um programa que leia três caracteres do tipo char e depois os imprima um 
em cada linha. Use um único comando printf() para isso.*/

char caracter2, caracter3, caracter4;
printf("\n14)Insira tres caracteres(sem espaco):");
scanf(" %c %c %c", &caracter2, &caracter3, &caracter4);
printf(" %c\n %c\n %c\n", caracter2, caracter3, caracter4);


/*15) Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima
as de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e
uma em cada linha. Use um único comando printf() para cada operação de escrita */

char caracter5;
int num10;
float num11;

printf("\n15)Insira um caractere, um numero inteiro e um numero float(enter entre eles):");
scanf(" %c  %d  %f", &caracter5, &num10, &num11);

printf("(Espaco)\n %c %d %f\n\n", caracter5, num10, num11);
printf("(Tabulacao)\n \t%c\t%d\t%f\n\n", caracter5, num10, num11);
printf("(Linhas)\n %c\n%d\n%f\n", caracter5, num10, num11);
return 0;
}
