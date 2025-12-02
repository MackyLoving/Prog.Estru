#include <stdio.h>
#include <conio.h>

int maiorValor(int a, int b) {
    return (a > b) ? a : b;
}

void lerDoisNumeros(int *x, int *y) {
    printf("Informe dois valores inteiros: ");
    scanf("%d %d", x, y);
}

void mostrarMaior(int x, int y) {
    printf("\nO maior entre %d e %d eh: %d\n", x, y, maiorValor(x, y));
}

int main() {
    int num1, num2;

    lerDoisNumeros(&num1, &num2);
    mostrarMaior(num1, num2);

    getch();
    return 0;
}
