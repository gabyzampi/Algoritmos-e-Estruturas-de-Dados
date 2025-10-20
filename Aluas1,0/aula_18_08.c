// aula 18/08

/*#include <stdio.h>

    int main() {
    puts("\nMeu programa de testes\n");
    printf("\nUsuario, informe um numero:");
    int n;
    scanf("%i",&n);
    printf("\nO usuario digitou %i", n);

    char nome[50];
    printf("\nUsuario, informe seu nome:");
    fgets(nome, sizeof(nome), stdin);
    printf("O usuario digitou %s\n", nome);

    char minhaVariavel[100];
    printf("Digite seu nome completo: ");
    scanf(" %[^\n]", minhaVariavel);
    while (getchar() != '\n'); // limpa o buffer

    fgets(minhaVariavel, sizeof(minhaVariavel), stdin);
    minhaVariavel[strcspn(minhaVariavel, "\n")] = '\0'; */
/*
#include <stdio.h>
   
int main(){
   int x = 10, y = 4;
   printf("\n\n ### Meu Programa ### \n\n");
   printf(" -> A soma .............: %i \n", x + y);
   printf(" -> O resto da divisao .: %i \n", x % y);

   return 0;
}*/
#include <stdio.h>
#include <stdbool.h>

 int main()
{
    int x = 10, y = 4;
    bool x, y;
    printf("\n\n ### Meu Programa ### \n\n");
    printf(" -> Saida AND logico: %i \n", (x < 5 && y >= 4));
    printf(" -> Saida NOT logico: %i \n", !(x < y));
    return 0;
}