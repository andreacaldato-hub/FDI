// 2024-09-30
//  Inserisce una sequenza di 100 numeri e la blocca ritornando False se il
//  numero inserito é <= 3 altrimenti ritorna True.
#include <stdio.h>

int main(void) {
    int n;
    for (int i = 0; i <= 100; i++) {
        scanf("%d", &n);
        if (n <= 3) {
            printf("False\n");
            return 1;
        }
    }
    printf("True\n");
}
