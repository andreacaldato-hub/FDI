// 2024-09-30
//  Smma di tot numeri che termina con il numero -99, ritornado la somma dei
//  numeri
#include <stdio.h>

int main() {
    int n;
    int somma = 0;
    printf("Scrivi sequenza >= 0");
    scanf("%d", &n);
    while ((n > 0) && (n != -99)) {
        somma = somma + n;
        int n = scanf("%d", &n);
    }
    printf("%i", somma);
}
