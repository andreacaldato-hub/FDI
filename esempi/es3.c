// 2024-09-30
//  Esempio ciclo do while
#include <stdio.h>
int main(void) {
    int numero;
    do {
        printf("Valore >= 0 o -99: ");
        scanf("%d", &numero);

    } while ((numero < 0) && (numero != -99));
    do {
        printf("Valore in[100,200]: ");
        scanf("%d", &numero);

    } while ((numero < 100) || (numero > 200));
}
