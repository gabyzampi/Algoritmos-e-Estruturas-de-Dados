//Aula 08/09
/*anotações: 

int somaInteiros (int a, int b); -  pode ter alguma coisa ou nao, se tiver é parametros
TIPO  NOME (TIPO PARAMETRO1, TIPO PARAMETRO2);  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>//

//funcoes nesta area -declaracao

int main(){

}
// implementacao das funcoes*/

//EXEMPLO 1 E 2

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int somaInteiros (int a, int b);

void montarTitulo() {
    printf("********************\n");
    printf("*****Calculadora****\n");
    printf("********************\n");
    printf("\n\n");
}
void minhafuncao(char nome[],int idade){
printf("Ola %s, sua idade e: %d anos.\n\n", nome, idade);
}

void minhafuncao2 (int vet[5]){
    int i;
    for(i = 0; i < 5; i++){
        printf("%d\n\n", vet[i]);
    }
}
int funcaoSoma5(int x) {
    return (x+5);
}

int main()
{
    int s = somaInteiros(10,30);
    printf("\nResultado: %d\n", s);

    montarTitulo(); //chamada da funcao

    minhafuncao("Joao", 20);
    minhafuncao("Maria", 25);
    minhafuncao("Pedro", 30);
    
    int vet[5] = {10,20,30,40,50};
    vet[1] = 112;
    vet[2] = 1001;
    vet[4] = 65;

    minhafuncao2(vet);

    int res = funcaoSoma5(100);
    printf("Resultado:%d\n", res);

    return 0;
}


int somaInteiros (int a, int b){
    {
        int soma = a + b;
        return soma;
    }
}

//EXEMPLO 3 - RECURSIVIDADE
int main(){
    int valor = 5;
    printf("Soma recursiva de 1 a %d = %d\n", valor, somaRecursiva(valor));
    return 0;
}

//processo: 5+4+3+2+1
//resultado: 15
int somaRecursiva(int valor){
    if (valor > 0){
        return valor + somaRecursiva(valor -1);
    } else {
        return 0;
    }
}
