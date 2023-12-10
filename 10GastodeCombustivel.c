#include <stdio.h>

int main()
{
    int horas, k;
    scanf("%d\n%d", &horas, &k);
    printf("%.3f\n", (k / 12.0) * horas);
    
    return 0;
}
