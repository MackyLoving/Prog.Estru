#include <stdio.h>

int main() {
    int valorX;
    int valorY;
    int menorValor;
    int maiorValor;
    int somaImpares = 0; 
    
    printf("Informe o primeiro numero inteiro (X): ");
    scanf("%d", &valorX);

    printf("Informe o segundo numero inteiro (Y): ");
    scanf("%d", &valorY);

    if (valorX < valorY) {
        menorValor = valorX;
        maiorValor = valorY;
    } else {
        menorValor = valorY;
        maiorValor = valorX;
    }

    for (int i = menorValor + 1; i < maiorValor; i++) {
        if (i % 2 != 0) {
            somaImpares = somaImpares + i;
        }
    }
    printf("\nA soma dos numeros impares entre %d e %d e: %d\n", menorValor, maiorValor, somaImpares);

    return 0;
}
