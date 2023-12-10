#include <stdio.h>

int main() {
    int q = 0;
    int codigo = 0;
    float preco = 0;
    int contador = 0;
    int teste;

    scanf("%d", &teste);

    while (contador < teste) {
        scanf("%d %d", &codigo, &q);

        switch (codigo) {
            case 1001:
                preco += 1.50 * q;
                break;

            case 1002:
                preco += 2.50 * q;
                break;

            case 1003:
                preco += 3.50 * q;
                break;

            case 1004:
                preco += 4.50 * q;
                break;

            case 1005:
                preco += 5.50 * q;
                break;

            default:
                printf("Codigo invalido!\n");
                break;
        }

        contador++;
    }

    printf("%.2f\n", preco);

    return 0;
}
