//tarefa

/* Criar um programa capaz de receber 3 valores de mensalidade de um usuario;

Solicitar ao usuario informar se haverá ou não incidência de taxa (*1.27);

Resultados (Saisa Terminal):
Mostrar nome do usuario;
Mostrar a media dos valores da mensalidade sem taxa;
Mostrar a media doa valores com taxa aplicada;*/

#include <stdio.h>

int main(void) {
    char nome[50];
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
     printf("Nome do Usuário: %s\n", nome);
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

    

    return 0;
}