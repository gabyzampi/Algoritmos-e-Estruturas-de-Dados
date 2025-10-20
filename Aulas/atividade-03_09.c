#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
char str[] = "programacao";
char letra ='a';
int i;
   for (i =0; str[i] != '\0';i++){
    if (str[i] == letra){
        printf ("Letra '%c' encontrada na posicao %d\n", letra, i);
    }
   }
}