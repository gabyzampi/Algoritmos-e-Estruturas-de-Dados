/*● Criar um programa que utilize o enum chamado nivel, definido
anteriormente, para verificar e avaliar o nível de ruído
informado pelo usuário;
● O usuário deve informar um valor inteiro, simbolizando o ruído
em decibéis;
● Por meio de uma função, verificar o valor e informar na tela se
o ruído é baixo (< BAIXO), médio (entre BAIXO e MEDIO), alto
(entre MEDIO e ALTO) ou muito alto.
*/

typedef enum {
    BAIXO = 20,
    MEDIO = 50,
    ALTO = 80
} nivel;

void verificarNivel(int valor){
    if (valor < BAIXO) {
        printf("Ruido debil (muito baixo)\n");
    } 
    else if (valor < MEDIO) {
        printf("Ruido baixo\n");
    } 
    else if (valor < ALTO) {
        printf("Ruido medio\n");
    } 
    else {
        printf("Ruido alto / muito alto\n");
    }
}


int main() {
    int ruido;

    printf("Informe o valor do ruido (em decibeis): ");
    scanf("%d", &ruido);

    verificarNivel(ruido);

    return 0;
}