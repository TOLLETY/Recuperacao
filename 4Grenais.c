#include <stdio.h>

int main() {
    int inter = 0;
    int gremio = 0;
    int opcao;
    int grenais = 0;
    int empates = 0;
    int vitoria_gremio = 0;
    int vitoria_inter = 0;

    do {
        scanf("%d %d", &inter, &gremio);
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &opcao);
        grenais++;

        if (inter == gremio) {
            empates++;
        } else if (inter > gremio) {
            vitoria_inter++;
        } else {
            vitoria_gremio++;
        }
        
    } while(opcao == 1);

    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", vitoria_inter);
    printf("Gremio:%d\n", vitoria_gremio);
    printf("Empates:%d\n", empates);

    if (vitoria_inter > vitoria_gremio) {
        printf("Inter venceu mais\n");
    } else if (vitoria_inter < vitoria_gremio) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Empate\n");
    }

    return 0;
}
