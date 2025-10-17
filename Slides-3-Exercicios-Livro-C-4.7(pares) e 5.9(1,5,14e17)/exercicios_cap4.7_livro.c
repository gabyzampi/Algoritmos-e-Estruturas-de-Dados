// Linguagem C: Completa e Descomplicada. André Backes - Exercícios pares tópico 4.7 (10/09/2025)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*2) Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os 
dois números forem iguais, imprima a mensagem “Números iguais”.*/

/*##PROGRAMA##

int main(){
    int num1, num2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2){
        printf("O maior numero e: %d\n", num1);
    } else if (num2 > num1){
        printf("O maior numero e: %d\n", num2);
    } else {
        printf("Numeros iguais\n");
    }
}
*/



/*4) Faça um programa que leia o salário de um trabalhador e o valor da prestação de 
um empréstimo. Se a prestação:
 • For maior que 20% do salário, imprima: “Empréstimo não concedido.”
 • Caso contrário, imprima: “Empréstimo concedido.”*/

 /*##PROGRAMA##

 int main(){
    float salario, prestacao;
    printf("Digite o valor do salario bruto: ");
    scanf("%f", &salario);
    printf("Digite o valor da prestacao do emprestimo: ");
    scanf("%f", &prestacao);
    if (prestacao > 20*(salario/100)){
        printf("Emprestimo nao concedido.\n");
    } else {
        printf("Emprestimo concedido.\n");
    }
 }
*/



 /*6)  Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre 
seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
 •Homens: (72,7 * h) – 58
 •Mulheres: (62,1 * h) – 44,7*/

/*##PROGRAMA##

int main(){
    float h;
    char sexo;
    printf("Digite sua altura (em metros)\n(Exemplo 1.59):");
    scanf("%f", &h);
    printf("Digite seu sexo (Masculino ou Feminino) (M/F):");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo =='m'){
        printf("Seu peso ideal e: %.2fkg\n", (72.7*h) -58);
    } else if (sexo == 'F' || sexo == 'f'){
        printf("Seu peso ideal e: %.2fkg\n", (62.1*h) - 44.7);
    } else {
        printf("Sexo invalido.\n");
    }
 }
*/


 /* 8)  Escreva um programa que, dada a idade de um nadador, o classifique em uma das 
seguintes categorias:
  Categoria    Idade
 Infantil A | 5-7
 Infantil B | 8-10
 Juvenil A  | 11-13
 Juvenil B  | 14-17
 Sênior     | maiores de 18 anos*/


/*##PROGRAMA##

 int main(){
    int idade;
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    if (idade >=5 &&  idade <=7){
        printf("Categoria: Infantil A\n");
    } else if (idade >=8 && idade <=10){
        printf("Categoria: Infantil B\n");
    } else if (idade >=11 && idade <=13){
        printf("Categoria: Juvenil A\n");
    } else if (idade >=14 && idade <=17){
        printf("Categoria: Juvenil B\n");
    } else if (idade > 18 && idade < 120){
        printf("Categoria: Senior\n");
    } else {
        printf("Idade invalida\n");
    }
 }
*/

 /*10) Faça um programa que leia três números inteiros positivos e efetue o cálculo de 
uma das seguintes médias de acordo com um valor numérico digitado pelo usuário e mostrado na tabela a seguir:
 (QUADRO NO CADERNO) */

 /*##PROGRAMA##
 
int main(){
    int x, y, z, escolha;
    float mediaGeometrica,  mediaPonderada, mediaHarmonica, mediaAritmetica;
    printf("Digite tres numeros inteiros positivos (enter entre eles): ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Escolha o tipo de media que deseja calcular:\n");
    printf(" 1 - Media Geometrica\n 2 - Media Ponderada\n 3 - Media Harmonica\n 4 - Media Aritmetica\n");
    scanf("%d", &escolha);
    if (escolha == 1){
        printf("A media geometrica de %d,%d,%d eh: %.2f\n",x,y,z, (x*y*z));
    } else if (escolha == 2){
        printf("A media ponderada de %d,%d,%d eh: %.2f\n",x,y,z, (x +2*y+3*z)/6.0);
    } else if (escolha == 3){
        printf("A media harmonica de %d,%d,%d eh: %.2f\n",x,y,z, (1.0/(1.0/x + 1.0/y + 1.0/z)));
    } else if (escolha == 4){
        printf("A media aritmetica de %d,%d,%d eh: %.2f\n",x,y,z, (x+y+z)/3.0);
    } else {
        printf("Escolha invalida.\n");
    }
}

*/


 /*12) Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 
e imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1, 
segunda-feira, se 2, e assim por diante.*/

/*##PROGRAMA##

int main(){
    int dia;
    printf("Digite um numero entre 1 e 7:");
    scanf("%d", &dia);
    switch(dia){
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terca-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
        default:
            printf("Numero invalido.\n");
    }
}
*/


/*14) Faça um programa para verificar se determinado número inteiro lido é divisível 
por 3 ou 5, mas não simultaneamente pelos dois.*/

/*##PROGRAMA##

int main() {
    int num;
    printf("Insira um numero inteiro: ");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 != 0) {
    printf("O numero %d e divisivel por 3, mas nao por 5.\n", num);
} else if (num % 5 == 0 && num % 3 != 0) {
    printf("O numero %d e divisivel por 5, mas nao por 3.\n", num);
} else {
    printf("O numero %d nao atende aos criterios.\n", num);
}
}
*/
