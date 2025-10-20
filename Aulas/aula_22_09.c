//aula 22/09

#include <stdio.h>
#include <stdbool.h>

/*struct carro {
    char marca[50];
    char modelo[50];
    int ano;
};

struct carro meu_carro;

int main(){
    struct carro car1 = {"Ford", "Mustang"};
    printf("Marca: %s\n", car1.marca);
    printf("Modelo: %s\n", car1.modelo);
    printf("Ano: %d\n", car1.ano=1990);

    return 0;
    
    
};
 typedef struct aula_22_09
 {
   
 };*/

 struct endereco
 {
    char rua[201];
    int numero;
    char bairro[101];
    char cep[9];
 };

 //struct endereco meu_endereco;

 int main(){
    struct endereco end1 = {"aa ", 12, " sol ", "8595 "};
    printf("%s,%i,%s,%s\n", end1.rua, end1.numero, end1.bairro, end1.cep);
    return 0;

 }