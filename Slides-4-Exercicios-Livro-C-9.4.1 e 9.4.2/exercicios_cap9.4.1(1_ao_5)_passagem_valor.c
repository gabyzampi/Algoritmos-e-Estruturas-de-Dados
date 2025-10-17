// Linguagem C: Completa e Descomplicada. André Backes - Exercícios tópico 9.4.1(17/10/2025)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*1)  Escreva uma função que receba por parâmetro dois números e retorne o maior 
deles.*/

int maiorNumero(int x, int y){
    if (x > y) {
        return x;
    } else if (y > x) {
        return y;
    } else {
        return 0;
    }
}

int main() {
    int x = 5;
    int y = 15;
    int resultado;

    resultado = maiorNumero(x, y);

    if (resultado == 0) {
        printf("Os numeros sao iguais.\n");
    } else {
        printf("O maior numero eh: %d\n", resultado);
    }

    return 0;
}


/* 2)  Faça uma função que receba um número inteiro de 1 a 12 e imprima em tela o 
mês e a sua quantidade de dias de acordo com o número digitado pelo usuário. 
Exemplo: Entrada = 4. Saída = abril.*/


void mes(int num) {
    switch (num) {
        case 1:
            printf("Janeiro - 31 dias\n");
            break;
        case 2:
            printf("Fevereiro - 28 ou 29 dias\n");
            break;
        case 3:
            printf("Março - 31 dias\n");
            break;
        case 4:
            printf("Abril - 30 dias\n");
            break;
        case 5:
            printf("Maio - 31 dias\n");
            break;
        case 6:
            printf("Junho - 30 dias\n");
            break;
        case 7:
            printf("Julho - 31 dias\n");
            break;
        case 8:
            printf("Agosto - 31 dias\n");
            break;
        case 9:
            printf("Setembro - 30 dias\n");
            break;
        case 10:
            printf("Outubro - 31 dias\n");
            break;
        case 11:
            printf("Novembro - 30 dias\n");
            break;
        case 12:
            printf("Dezembro - 31 dias\n");
            break;
        default:
            printf("Número inválido! Digite de 1 a 12.\n");
    }
}

int main() {
    int numero;
    printf("Digite um número de 1 a 12: ");
    scanf("%d", &numero);
    mes(numero);
    return 0;
}



/*3)  Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit 
e a retorne convertida em graus Celsius. A fórmula de conversão é: C = (F – 32.0) * 
(5.0/9.0), sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/


float converterParaCelsius(float fahrenheit) {
    float celsius;
    celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
    return celsius;
}

int main() {
    float f, c;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);

    c = converterParaCelsius(f);

    printf("Temperatura em Celsius: %.2f°C\n", c);

    return 0;
}



/*4) Escreva uma função que receba por parâmetro a altura e o raio de um cilindro 
circular e retorne o volume desse cilindro. O volume de um cilindro circular é 
calculado por meio da seguinte fórmula:

    V = p * raio2 * altura,

em que p = 3.1414592 */


float volumeCilindro(float raio, float altura) {
    float pi = 3.1414592;
    float volume = pi * (raio * raio) * altura;
    return volume;
}

int main() {
    float r, h, v;

    printf("Digite o raio do cilindro: ");
    scanf("%f", &r);

    printf("Digite a altura do cilindro: ");
    scanf("%f", &h);

    v = volumeCilindro(r, h);

    printf("O volume do cilindro eh: %.2f\n", v);

    return 0;
}

/*5)  Escreva uma função para o cálculo do volume de uma esfera

    V = 4/3p * r3,

 em que p = 3.1414592 valor do raio r deve ser passado por parâmetro*/

 float volumeEsfera(float raio) {
    float pi = 3.1414592;
    float volume = (4.0 / 3.0) * pi * (raio * raio * raio);
    return volume;
}

int main() {
    float r, v;

    printf("Digite o raio da esfera: ");
    scanf("%f", &r);

    v = volumeEsfera(r);

    printf("O volume da esfera eh: %.2f\n", v);

    return 0;
}
