// 2024-09-30
//  Somma di 5 numeri scelti dall'utente
#include <stdio.h>
int sum = 0, n;
int main(void) {
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);
        sum = sum + n;
    }
    printf("La somma é: %i\n", sum);
}
