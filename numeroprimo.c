
#include <stdio.h>

int is_prime(int a);
int main(void) {
    int n;
    do {
        printf("Scegli un numero maggiore di 1: ");
        scanf("%d", &n);
    } while (n < 1);
    if (is_prime(n) == 0) {
        printf("Il numero non é primo\n");
    } else {
        printf("Il numero é primo\n");
    }
}
int is_prime(int a) {
    for (int i = 2; i < a; i++) {
        if (a % i == 0) return 0;
    };
    return 1;
}
