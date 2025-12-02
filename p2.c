#include <stdio.h>

int main()
{
    int distancia;
    float combGasto;
    float consumo;
    
    printf("Informe a dstância percorrida: ");
    scanf("%d", &distancia);
    
    printf("Informe o gasto de combustíel: ");
    scanf("%f", &combGasto);
    
    consumo = distancia/combGasto;
    
    printf("Consumo: %.3f", consumo, "km/l");
    return 0;
    
}
