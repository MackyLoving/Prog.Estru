#include <stdio.h>

int main() {
    int numero;     
    int maiorValor = 0; 
    int posicaoMaior = 0; 
    printf("--- Encontrando o Maior Valor e Posicao ---\n");

    for (int i = 1; i <= 10; i++) {
        printf("Digite o %dº numero inteiro: ", i);
        scanf("%d", &numero);
        
        if (numero > maiorValor) {
            maiorValor = numero;
        
            posicaoMaior = i;
        }
    }

    printf("\nO maior valor lido foi: %d\n", maiorValor);
    printf("Ele foi digitado na posicao: %d\n", posicaoMaior);

    return 0;
}
