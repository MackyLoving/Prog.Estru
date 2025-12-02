#include <stdio.h>

int main() {
    int valorM;
    int valorN;
    int menorValor;
    int maiorValor;
    int somaTotal;

    while (1) {
        printf("Informe dois numeros inteiros (M e N, separados por espaco): ");
        scanf("%d %d", &valorM, &valorN);
        
        if (valorM <= 0 || valorN <= 0) {
            break;
        }

        if (valorM < valorN) {
            menorValor = valorM;
            maiorValor = valorN;
        } else {
            menorValor = valorN;
            maiorValor = valorM;
        }
        somaTotal = 0;
        
        printf("Sequencia: ");
        for (int i = menorValor; i <= maiorValor; i++) {
            printf("%d ", i); 
            somaTotal = somaTotal + i; 
        }

        printf("Soma = %d\n\n", somaTotal);
    }
    
    printf("\nProcessamento encerrado porque um dos valores foi menor ou igual a zero.\n");
    
    return 0;
}
