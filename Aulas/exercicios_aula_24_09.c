/*Criar um programa que permita o usuário informar o modelo, a marca e o ano do carro. 
Pegue esses dados informados e guarde em uma estrutura de dados.
– O modelo e a marca pode ser um char de 50 caracteres;
– O ano uma variável do tipo int;
– Crie uma estrutura para isso;
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

typedef struct{

    char modelo[50];
    int ano;
    bool transferido;

}carro;

int main(){

    printf("Informe o modelo do carro:");
    scanf(" ");

    


}