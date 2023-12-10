#include <stdio.h>

int main(void) {

    unsigned short int n, indice, soma = 0, numero;

    scanf("%hd", &n);

    while (n != 0) {
        soma = 0;
        
        scanf("%hd", &numero);

        for (indice = 0; indice < numero; indice++)
            soma += (indice % 2 == 0) ? 1 : -1;
            n--;

        printf("%d\n", soma);
    }

    return 0;
}
