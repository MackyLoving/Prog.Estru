#include <stdio.h>

int main()
{
    float a; 
    float b; 
    float media;

    printf("Informe o primeiro valor:");
    scanf("%f", &a); 
    
    printf("Informe o segundo valor: ");
    scanf("%f", &b); 
    media = (a + b) / 2.0;
    
    printf("Media.5f\n", media); 

    return 0;
}
