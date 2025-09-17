// Linguagem C: Completa e Descomplicada. André Backes - Exercícios pares tópico 5.9 (15/09/2025)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*1)  Faça um programa que leia um número inteiro positivo N e imprima todos os 
números naturais de 0 até N em ordem crescente.*/


/*PROGRAMA

int main(){
    int num;
    int casa = 0;

    printf("Insira um numero inteiro positivo: ");
    scanf("%d",&num);

    if (num >=1){
        printf("\nVoce digitou: %d", num);
    }else {
        printf("\nNumero invalido tente novamente!\n");
        return 0;
    }

    while(num > casa){
        casa = casa + 1;
        printf("\nNumero em ordem crescente %d", casa);
    }
    
    return 0;
}

*/



/* 5)  Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/



/*PROGRAMA


int main(){
    int numeros ;
    int soma = 0;
    for (numeros = 1; numeros <101; numeros++){
        if (numeros % 2 == 0){
            soma += numeros; 
        }
    }
    printf("\nA soma dos numeros pares de 1 a 100: %d\n", soma);
    return 0;
}

*/



/* 14)  Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. 
Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa 
no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma 
dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 
13, 21, 34*/



/*PROGRAMA


int main(){
    int num = 0, i=0;
    long long a = 0, b = 1, fib = 0; 

    printf("Insira um numero inteiro >=0: ");
    scanf("%d", &num);

    if (num>=0){
        printf("Voce digitou: %d\n", num);
    } else {
        printf("Numero invalido!\n");
        return 0;
    }

if (num == 0) {
        fib = 0;
    } else if (num == 1) {
        fib = 1;
    } else {
        for (i = 2; i <= num; i++) {
            fib = a + b;
            a = b;
            b = fib;
        }
    }

    printf("O termo de ordem %d da sequencia de Fibonacci eh: %lld\n", num, fib);

    return 0;
}

*/




/* 17)  Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas do chamado triângulo de Floyd:
 1
 2 3
 4 5 6
 7 8 9 10
 11 12 13 14 15
 16 17 18 19 20 21*/

 

 /*PROGRAMA


int main() {
    int totalLinhas;          // quantidade de linhas que o usuário quer
    int linhaAtual, colunaAtual; // controles dos loops
    int numeroAtual = 1;      // começa com 1 e vai aumentando

    printf("Digite um numero inteiro positivo N (quantidade de linhas): ");
    scanf("%d", &totalLinhas);

    if (totalLinhas <= 0) {
        printf("Numero invalido! N deve ser positivo.\n");
        return 0;
    }

    // Loop externo: controla as linhas
    for (linhaAtual = 1; linhaAtual <= totalLinhas; linhaAtual++) {
        
        // Loop interno: imprime a quantidade certa de números em cada linha
        for (colunaAtual = 1; colunaAtual <= linhaAtual; colunaAtual++) {
            printf("%d ", numeroAtual);
            numeroAtual++; // passa para o próximo número
        }

        printf("\n"); // pula para a próxima linha
    }

    return 0;
}


*/