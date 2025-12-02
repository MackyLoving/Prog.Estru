#include <stdio.h>

int main() {
    int numPares; 
    float valorX; 
    float valorY; 
    float resultado;
    
    printf("Informe a quantidade de pares (N) a serem processados: ");
    scanf("%d", &numPares);
    
    for (int i = 0; i < numPares; i++) {
        
        printf("\nPar %d/%d:\n", i + 1, numPares);
        
        printf("  Informe o valor X (numerador): ");
        scanf("%f", &valorX);
        
        printf("  Informe o valor Y (denominador): ");
        scanf("%f", &valorY);
        
        if (valorY == 0.0) {
            printf("Resultado: divisao impossivel\n");
        } 
        else {
            resultado = valorX / valorY;
            
            printf("Resultado: %.2f\n", resultado); 
        }
    }
    
    return 0;
}
