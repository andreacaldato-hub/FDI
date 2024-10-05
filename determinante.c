#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int det(int **matrice, int a);
int **submatrix(int **matrice, int size, int col);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Utilizzo: %s <valori_matrice>\n", argv[0]);
        return 1;
    }

    int length = strlen(argv[1]);
    int *valori = (int *)malloc(length * sizeof(int));
    for (int n = 0; n < length; n++) {
        valori[n] = argv[1][n] - '0';
    }

    int a = sqrt(length);
    if (a * a != length) {
        printf("Errore la matrice deve essere quadrata");
        free(valori);
        return 1;
    }

    int **matrice = (int **)malloc(a * sizeof(int *));
    for (int i = 0; i < a; i++) {
        matrice[i] = (int *)malloc(a * sizeof(int));
    }

    int k = 0;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            matrice[i][j] = valori[k++];
        }
    }

    int determinante = det(matrice, a);
    printf("Determinant: %i\n", determinante);

    for (int i = 0; i < a; i++) {
        free(matrice[i]);
    }
    free(matrice);
    free(valori);

    return 0;
}

int det(int **matrice, int a) {
    if (a == 1) {
        return matrice[0][0];
    }

    if (a == 2) {
        return matrice[0][0] * matrice[1][1] - matrice[0][1] * matrice[1][0];
    }

    int sum = 0;
    for (int j = 0; j < a; j++) {
        int sign = (j % 2 == 0) ? 1 : -1;
        int **sub = submatrix(matrice, a, j);
        sum += sign * matrice[0][j] * det(sub, a - 1);

        for (int i = 0; i < a - 1; i++) {
            free(sub[i]);
        }
        free(sub);
    }

    return sum;
}

int **submatrix(int **matrice, int size, int col) {
    int **sub = (int **)malloc((size - 1) * sizeof(int *));
    for (int i = 0; i < size - 1; i++) {
        sub[i] = (int *)malloc((size - 1) * sizeof(int));
    }

    for (int i = 1; i < size; i++) {
        int sub_col = 0;
        for (int j = 0; j < size; j++) {
            if (j == col) continue;
            sub[i - 1][sub_col++] = matrice[i][j];
        }
    }

    return sub;
}
