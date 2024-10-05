// Inserisce una sequenza di caratteri e ritorna il numero di caratteri letti.
#include <stdio.h>

int main(void) {
    int numero = 0;
    printf("Inserire sequenza: ");
    char c = getchar();
    while (c != '\n') {
        numero++;
        c = getchar();
    }
    printf("letti %d caratteri\n", numero);
}
