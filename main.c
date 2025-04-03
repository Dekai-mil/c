#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int numero = rand() % 100;
    printf("El número aleatorio es: %d\n", numero);
    return 0;
}
