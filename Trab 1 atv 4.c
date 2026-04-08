#include <stdio.h>

int main() {
    int A[3][3], I[3][3], R[3][3];
    int i, j, k;

    printf("Digite os elementos da matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(i == j)
                I[i][j] = 1;
            else
                I[i][j] = 0;
        }
    }

    printf("\nMatriz Identidade:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", I[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            R[i][j] = 0;
            for(k = 0; k < 3; k++) {
                R[i][j] += A[i][k] * I[k][j];
            }
        }
    }

    printf("\nResultado da multiplicacao (A * I):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", R[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Original:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}