#include <stdio.h>

int main() {
    int codigo, quantidade;
    double preco = 0.0;  

    scanf("%d %d", &codigo, &quantidade);

    if (codigo == 1) {
        preco = 4.00;
    } else if (codigo == 2) {
        preco = 4.5;
    } else if (codigo == 3) {
        preco = 5.00;
    } else if (codigo == 4) {
        preco = 2.00;
    } else if (codigo == 5) {
        preco = 1.50;
    } else {
        printf("Código inválido\n");
        return 1; 
    }

    printf("Total: R$ %.2lf\n", preco * quantidade);

    return 0;
}
