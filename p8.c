#include <stdio.h>

int main() {
    int horaInicio;
    int minutoInicio;
    int horaFim;
    int minutoFim;
    
    int duracaoHoras;
    int duracaoMinutos;
    
    int totalMinutosInicio;
    int totalMinutosFim;
    int duracaoTotalMinutos;

    printf("Informe a hora de inicio (0 a 23): ");
    scanf("%d", &horaInicio);
    
    printf("Informe o minuto de inicio (0 a 59): ");
    scanf("%d", &minutoInicio);
    
    printf("Informe a hora de termino (0 a 23): ");
    scanf("%d", &horaFim);
    
    printf("Informe o minuto de termino (0 a 59): ");
    scanf("%d", &minutoFim);
    
    totalMinutosInicio = horaInicio * 60 + minutoInicio;
    totalMinutosFim = horaFim * 60 + minutoFim;

    if (totalMinutosInicio < totalMinutosFim) {
        duracaoTotalMinutos = totalMinutosFim - totalMinutosInicio;
    } else {

        duracaoTotalMinutos = (1440 - totalMinutosInicio) + totalMinutosFim;
    }
    if (duracaoTotalMinutos == 0) {
        duracaoTotalMinutos = 1440;
    }
    
    duracaoHoras = duracaoTotalMinutos / 60; 
    duracaoMinutos = duracaoTotalMinutos % 60; 


    printf("\nA duracao total do jogo foi de: %d horas e %d minutos.\n", duracaoHoras, duracaoMinutos);
    
    return 0;
}
