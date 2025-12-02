#include <stdio.h>
#include <math.h> 

int main() {

    float raio;
    float volume;
    
    float pi = 3.14;
    
    // leitura do raiio
    printf("Informe o valor do raio da esfera: ");
    scanf("%f", &raio);
    
    
    volume = (4.0/3.0) * pi * (raio * raio * raio); 
    
    printf("Volume = %.3f\n", volume);
    
    return 0;
}
