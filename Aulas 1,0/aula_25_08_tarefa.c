#include <stdio.h>

int main(void) {
    /*char nome[50];
    printf("Informe seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    float mensalidade1, mensalidade2, mensalidade3;
    printf("Insira a Primeira Mensalidade:");
    scanf("%f", &mensalidade1);
    printf("Insira a Segunda Mensalidade:");
    scanf("%f", &mensalidade2);
    printf("Insira a Terceira Mensalidade:");
    scanf("%f", &mensalidade3);
    
    printf("Havera incidencia de taxa? (1 para sim, 0 para nao): ");
    int taxa;
    scanf("%d", &taxa);

    
    float mediaTaxaFora = (mensalidade1 + mensalidade2 + mensalidade3) / 3;

    if (taxa == 0){
     float mediaSemTaxa = (mensalidade1 + mensalidade2 + mensalidade3) / 3;
     printf("Nome do Usuario: %s\n", nome);
     printf("Media das Mensalidades (sem taxa): %.2f\n", mediaSemTaxa);
    }
    else if ( taxa == 1){
    float mediaComTaxa = mediaTaxaFora * 1.27;
    printf("Nome do Usuário: %s\n", nome);
    printf("Media das Mensalidades (com taxa): %.2f\n", mediaComTaxa);
    }
    else {
        printf("Opção inválida.\n");
    }

    
int dia = 4;
switch (dia) {
    case 6:
    printf("\nOlá, hoje é sabado! \n Tenha um bom dia!\n");
    break;
    case 7:
    printf("\nHoje é domingo.\n");
    break;
    default:
    printf("Ansioso para o fim de semana!\n");
}

int i = 0;
while (i<5) {
    printf("%d\n",i);
    i++;
} 
  

    int = 0;

    do {
        printf("%d\n, i"); // para validar enquanto a pessoa não digitar o desejado ele ficara preso
        i++;
    } while (i<5);
      
int i,j;
for (i =0; i<= 2; ++i) {          //i = 1 é a inicialização ai ( um é menor igual a 2 passa por intero e incremneta)
    printf("For externo:%d\n", i);

    for (j = 0; j<= 3; ++j) {
        printf("For interno:%d\n",j);
    }
}

 int i = 0;
 while (i<10){
    if (i==4){
        break;
    }
    printf("%d\n",i);
    i++;
 }

 int i = 0;
 while (i<10){
    if (i==4){
        i++;
        continue;
    }
    printf("%d\n",i);
    i++;
 }

 int meuArray[] ={15,52,59,70};
 meuArray[0] = 33;
 printf("%i", meuArray[0]);

 char palavra[10] = {'d', 'i', 'a', ' ', ' ', 'o', 'i','\0'}; // \0 identifica o fim de uma str ( uma str com 50eu coloco 51 pois \0 encerra a str)
 printf("%c", palavra[0]);
 */

 int arrayld[] = {15,52,59,70};
 arrayld[0] = 33;
 printf("%d", arrayld[0]);
 //int arrayld[4];
 int i;
 for (i = 0; i < 4; i++) {
    arrayld[0] = 0;
 }

    return 0;
 }
