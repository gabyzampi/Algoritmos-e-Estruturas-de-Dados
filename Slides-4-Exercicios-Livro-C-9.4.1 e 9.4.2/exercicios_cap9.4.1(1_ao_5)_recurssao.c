// Linguagem C: Completa e Descomplicada. André Backes - Exercícios tópico 9.4.1(17/10/2025)

#include <stdio.h>

/*1)  Escreva uma função que receba por parâmetro dois números e retorne o maior 
deles.*/

int maiorNumero(int x, int y) {
    if (x == y)
        return x;
    else if (x > y)
        return x;
    else
        return maiorNumero(y, x); // chamada recursiva invertendo
}


/* 2)  Faça uma função que receba um número inteiro de 1 a 12 e imprima em tela o 
mês e a sua quantidade de dias de acordo com o número digitado pelo usuário. 
Exemplo: Entrada = 4. Saída = abril.*/


void imprimeMes(int num) {
    const char *meses[12] = {
        "Janeiro - 31 dias", "Fevereiro - 28 ou 29 dias", "Marco - 31 dias",
        "Abril - 30 dias", "Maio - 31 dias", "Junho - 30 dias",
        "Julho - 31 dias", "Agosto - 31 dias", "Setembro - 30 dias",
        "Outubro - 31 dias", "Novembro - 30 dias", "Dezembro - 31 dias"
    };

    if (num < 1 || num > 12) {
        printf("Numero invalido!\n");
        return;
    }

    if (num == 1) {
        printf("%s\n", meses[0]);
    } else {
        imprimeMes(num - 1); // vai descendo até chegar no mês 1
        if (num == 12) printf("\n");
        if (num == 12) printf("%s\n", meses[num - 1]);
    }
}



/*3)  Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit 
e a retorne convertida em graus Celsius. A fórmula de conversão é: C = (F – 32.0) * 
(5.0/9.0), sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/


float converteRecursivo(float F, float C) {
    if (F == 32) return C;
    return converteRecursivo(F - 1, C + (5.0 / 9.0)); // simula diferença gradual
}

float fahrenheitParaCelsius(float F) {
    return (F - 32.0) * (5.0 / 9.0);
}


/*4) Escreva uma função que receba por parâmetro a altura e o raio de um cilindro 
circular e retorne o volume desse cilindro. O volume de um cilindro circular é 
calculado por meio da seguinte fórmula:

    V = p * raio2 * altura,

em que p = 3.1414592 */


float potencia(float base, int expoente) {
    if (expoente == 0) return 1;
    return base * potencia(base, expoente - 1);
}

float volumeCilindro(float raio, float altura) {
    float pi = 3.1414592;
    return pi * potencia(raio, 2) * altura;
}


/*5)  Escreva uma função para o cálculo do volume de uma esfera

    V = 4/3p * r3,

 em que p = 3.1414592 valor do raio r deve ser passado por parâmetro*/

 

 float potencia(float base, int expoente) {
    // função recursiva para calcular base^expoente
    if (expoente == 0) {
        return 1; // caso base
    } else {
        return base * potencia(base, expoente - 1);
    }
}

float volumeEsfera(float raio) {
    float pi = 3.1414592;
    float volume = (4.0 / 3.0) * pi * potencia(raio, 3); // usa a função recursiva
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