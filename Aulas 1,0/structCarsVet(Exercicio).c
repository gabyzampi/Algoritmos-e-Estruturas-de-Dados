#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct 
{
    char modelo[51];
    char marca[51];
    int ano;
    bool transferido;

} carro;


int main(void) {
    carro car[1];

    int i;
    int j;

    int tamVetor = sizeof(car) / sizeof(car[0]);

    for ( i = 0; i < tamVetor; i++) 
    {   
        for ( j = 0; j< sizeof(car[i].marca); j++) 
        {
            car[i].marca[j] = '\0';
            car[i].modelo[j] = '\0';
        }
        car[i].ano = 0;
        car[i].transferido = false;
    }

    int k = 0;
    char resp_transferencia;

    while (k < tamVetor) 
    {
        printf("\nInforme o modelo: ");
        fgets(car[k].modelo, sizeof(car[i].modelo), stdin);
        car[k].modelo[strcspn(car[k].modelo, "\n")] = 0;


        printf("Informe a marca: ");
        fgets(car[k].marca, sizeof(car[k].marca), stdin);
        car[k].marca[strcspn(car[k].marca, "\n")] = 0;

        
        printf("Informe o ano: ");
        scanf("%i", &car[k].ano);
        

        
        printf("Informe se houve transferencia (S/N): ");
        if (scanf(" %c", &resp_transferencia) == 1) {
            if (resp_transferencia == 'S' || resp_transferencia == 's') {
                car[k].transferido = true;
            } else {
                car[k].transferido = false;
            }
        }
        while (getchar() != '\n'); 

        k++;
    }

    
    printf("\n ---- Carros cadastrados ----\n");
    for (i = 0; i < tamVetor; i++)
    {   
        printf("\n### Carro %d ###\n", i + 1);
        printf(" Modelo: %s\n Marca: %s\n Ano: %i",
                car[i].modelo, 
                car[i].marca, 
                car[i].ano);
    }

    printf(" Transferido: %s\n", car[i].transferido ? "Sim" : "Nao");
    printf("\n###############\n");
    
    return 0;
}
