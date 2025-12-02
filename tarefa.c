void fatorial(int n, int *resultado) {
    *resultado = 1; 

    for (int i = 2; i <= n; i++) {
        *resultado *= i;  
    }
}

int main() {
    int num = 5;      
    int fat;        

    fatorial(num, &fat);  

   
    printf("Fatorial de %d = %d\n", num, fat);

    return 0;  
}
