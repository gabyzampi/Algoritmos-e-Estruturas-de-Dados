// Linguagem C: Completa e Descomplicada. André Backes - Exercícios tópico 9.4.2(17/10/2025)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 1) Escreva uma função que, dado um número real passado como parâmetro,
      retorne a parte inteira e a parte fracionária desse número por referência. */

void separarPartes(float num, int *parteInteira, float *parteFracionaria) {
    *parteInteira = (int) num;             // converte para inteiro → parte inteira
    *parteFracionaria = num - *parteInteira; // subtrai para obter a parte decimal
}

int main() {
    float numero, fracao;
    int inteiro;

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    separarPartes(numero, &inteiro, &fracao);

    printf("Parte inteira: %d\n", inteiro);
    printf("Parte fracionaria: %.3f\n", fracao);

    return 0;
}


/*2)  Escreva uma função para o cálculo do volume e área de uma esfera
 V = 4/3 p + r3,
 A = 4 p * r2
 em que p = 3.1414592. O valor do raio r deve ser passado por parâmetro, e os 
valores calculados devem ser retornados por referência.*/


void calculaEsfera(float r, float *volume, float *area) {
    float pi = 3.1414592;
    *volume = (4.0 / 3.0) * pi * (r * r * r);  // volume = (4/3) * π * r³
    *area = 4.0 * pi * (r * r);                // área = 4 * π * r²
}

int main() {
    float raio, vol, ar;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    calculaEsfera(raio, &vol, &ar);

    printf("Volume da esfera: %.2f\n", vol);
    printf("Area da esfera: %.2f\n", ar);

    return 0;
}



/* 7)  Crie uma função que receba uma matriz A contendo 10 linhas e 10 colunas e 
retorne a soma dos seus elementos.*/


int somaMatriz(int A[10][10]) {
    int i, j;
    int soma = 0;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            soma += A[i][j];
        }
    }
    return soma;
}

int main() {
    int A[10][10];
    int i, j, resultado;

    printf("Digite os elementos da matriz 10x10:\n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    resultado = somaMatriz(A);

    printf("\nA soma de todos os elementos da matriz eh: %d\n", resultado);

    return 0;
}


/*9)  Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura 
deve conter o número de matrícula do aluno, seu nome e as notas de três provas. 
Agora, escreva uma função que receba um vetor de tamanho N dessa estrutura. 
Essa função deve retornar o índice do aluno que possui a maior média geral entre 
todos os alunos.*/

#define N 3 // quantidade de alunos 

typedef struct {
    int matricula;
    char nome[50];
    float notas[3];
} Aluno;

int indiceMaiorMedia(Aluno alunos[], int tamanho) {
    int i, j;
    float soma, media, maiorMedia = 0.0;
    int indiceMaior = 0;

    for (i = 0; i < tamanho; i++) {
        soma = 0.0;
        for (j = 0; j < 3; j++) {
            soma += alunos[i].notas[j];
        }
        media = soma / 3.0;

        if (media > maiorMedia) {
            maiorMedia = media;
            indiceMaior = i;
        }
    }

    return indiceMaior;
}

int main() {
    Aluno alunos[N];
    int i, j, indice;

    printf("=== Cadastro de Alunos ===\n");
    for (i = 0; i < N; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        getchar(); // limpar o buffer do teclado
        printf("Nome: ");
        fgets(alunos[i].nome, 50, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0'; // remove o \n

        for (j = 0; j < 3; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);
        }
    }

    indice = indiceMaiorMedia(alunos, N);

    printf("\nO aluno com maior media eh:\n");
    printf("Nome: %s\n", alunos[indice].nome);
    printf("Matricula: %d\n", alunos[indice].matricula);

    float soma = 0;
    for (i = 0; i < 3; i++) soma += alunos[indice].notas[i];
    printf("Media: %.2f\n", soma / 3.0);

    return 0;
}