/*Exercício 01
● Criar um programa que permita o usuário informar o modelo, a
marca e o ano do carro. Pegue esses dados informados e
guarde em uma estrutura de dados.
– O modelo e a marca pode ser um char de 50 caracteres;
– O ano uma variável do tipo int;
- Adicione o Trasferido;
– Crie uma estrutura para isso;*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>


struct carro {
    char modelo[50];
    char marca[50]; 
    int ano;
    bool transferido; 
}; 
// --- Função Principal ---
// A função main deve retornar um int, mesmo que seja 0.
int main() {
    // 1. Criar uma variável do tipo 'struct carro' para armazenar os dados.
    struct carro meuCarro;

    // 2. Coletar os dados do usuário.

    // Modelo
    printf("Informe o modelo do carro: ");
    
    if (fgets(meuCarro.modelo, 50, stdin) != NULL) {

        // Remove a quebra de linha ('\n') adicionada pelo fgets, se existir.
        meuCarro.modelo[strcspn(meuCarro.modelo, "\n")] = 0;
    }

    // Marca
    printf("Informe a marca do carro: ");
    if (fgets(meuCarro.marca, 50, stdin) != NULL) {
        meuCarro.marca[strcspn(meuCarro.marca, "\n")] = 0;
    }

    // Ano
    printf("Informe o ano do carro: ");
    scanf("%d", &meuCarro.ano);

    // Transferido (Usando 1 para Sim/Verdadeiro e 0 para Não/Falso)
    int temp_transferido;
    printf("O carro foi transferido? (1 para Sim / 0 para Nao): ");
    scanf("%d", &temp_transferido);
    meuCarro.transferido = (temp_transferido == 1);


    // 3. Exibir os dados guardados (Opcional, mas útil para verificar).
    printf("\n--- Dados do Carro Registrado ---\n");
    printf("Modelo: %s\n", meuCarro.modelo);
    printf("Marca: %s\n", meuCarro.marca);
    printf("Ano: %d\n", meuCarro.ano);
    printf("Transferido: %s\n", meuCarro.transferido ? "Sim" : "Nao"); // Usa operador ternário para exibir "Sim" ou "Não"

    return 0; // Finaliza a função principal.
}
