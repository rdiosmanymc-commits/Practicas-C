#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    printf("El residuo de %d entre %d es: %d\n", a % b);

    return 0;
}