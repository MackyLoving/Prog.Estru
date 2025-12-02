#include <stdio.h>

int main() {
    float velCar1 = 60.0;
    float velCar2 = 90.0;
    
    float distanciaKm;
    
    float velRelativa = velCar1 + velCar2; 
    printf("Informe a distância (em Km) entre os carros: ");

    scanf("%f", &distanciaKm);
    

    float tempoHoras = distanciaKm / velRelativa;
    float tempoMin = tempoHoras * 60.0;
    
    printf("Os carros se encontrarão em %.2f minutos (aproximadamente).\n", tempoMin);
    
    return 0;
}
