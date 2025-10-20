#include <stdio.h>
#include <string.h>



int main(){
    char str1[30], str2[25];
    int i, j;


    //'zerar' cada posição das strings

    for (i = 0; i < 29; i++) {
        str1[i] = '0';
    }
    str1[29] = '\0';  
 
    for (j = 0; j < 24; j++) {
        str2[j] = '0';
    }
    str2[24] = '\0';  


    //mostrar o conteudo vazio delas

    printf("Conteudo str1(i): %s\n", str1);
    printf("Conteudo str2(j): %s\n", str2);


    //pegar via terminal, o nome completo(str1) e nome da cidade(str2)

    printf("Digite seu nome completo: ");
    fgets(str1, sizeof(str1), stdin);
  
    printf("Digite o nome da cidade: ");
    fgets(str2, sizeof(str2), stdin);
   

    //mostrar o tamanho de cada string

    printf("Tamanho de str1: %d\n", (int)strlen(str1));
    printf("Tamanho de str2: %d\n", (int)strlen(str2));

   return 0;
}