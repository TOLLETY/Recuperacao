#include <stdio.h>

int main() {
    int diaini, diafinal;
    int dias;
    int horas;
    int minutos;
    int segundos;

    int hora_inicial, minuto_inicial, segundo_inicial;
    int hora_final, minuto_final, segundo_final;

    scanf("Dia %d", &diaini);
    scanf("%d : %d : %d\n", &hora_inicial, &minuto_inicial, &segundo_inicial);
    scanf("Dia %d", &diafinal);
    scanf("%d : %d : %d", &hora_final, &minuto_final, &segundo_final);

    dias = diafinal - diaini;
    horas = hora_final - hora_inicial;
    minutos = minuto_final - minuto_inicial;
    segundos = segundo_final - segundo_inicial;

    if (segundos < 0) {
        segundos += 60;
        minutos -= 1;
    }

    if (minutos < 0) {
        minutos += 60;
        horas -= 1;
    }

    if (horas < 0) {
        horas += 24;
        dias -= 1;
    }

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dias, horas, minutos, segundos);

    return 0;
}
