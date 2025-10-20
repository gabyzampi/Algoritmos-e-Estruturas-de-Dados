/*● Neste outro exercício, crie um vetor com 5 elementos usando a
estrutura carros do exercício 01, ou seja, será um vetor de
carros. Limpe os dados de cada elemento e faça as
adequações necessárias para receber do usuário os 5 carros
com seus respectivos dados: modelo, marca e ano.
● Após receber os dados, finalizar o programa e mostrar todos
os carros inseridos e com uma saída bem formatada para
facilitar a visualização.*/

#include <stdio.h>
#include <string.h>


typedef struct {
    char marca[50];
    char modelo[50];
    int ano; 
} carro;

int main(){
    carro carros[5];
    int i = 0;
    for (i=0; i<5; i++){
        strcpy(carros[i].modelo, ""); // modelo vazio
        strcpy(carros[i].marca, "");  // marca vazia
        carros[i].ano = 0;            // ano zerado
    }

 // Leitura dos dados
    for (i = 0; i < 5; i++) {
        printf("Digite o modelo do carro %d: ", i + 1);
        fgets(carros[i].modelo, 50, stdin);
        carros[i].modelo[strcspn(carros[i].modelo, "\n")] = '\0'; // remove o '\n'

        printf("Digite a marca do carro %d: ", i + 1);
        fgets(carros[i].marca, 50, stdin);
        carros[i].marca[strcspn(carros[i].marca, "\n")] = '\0';

        printf("Digite o ano do carro %d: ", i + 1);
        scanf("%d", &carros[i].ano);
        getchar(); // limpa o buffer do teclado
        printf("\n");
    }

    // Exibição dos dados
    printf("\n--- Lista de Carros ---\n");
    for (i = 0; i < 5; i++) {
        printf("Carro %d:\n", i + 1);
        printf("Modelo: %s\n", carros[i].modelo);
        printf("Marca: %s\n", carros[i].marca);
        printf("Ano: %d\n\n", carros[i].ano);
    }

    return 0;
}



