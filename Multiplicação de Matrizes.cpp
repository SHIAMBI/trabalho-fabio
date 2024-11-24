#include <stdio.h>

#define N 3
#define M 3

void multiply_matrices(int A[N][M], int B[N][M], int C[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            C[i][j] = 0;
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[N][M] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[N][M] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int C[N][M];

    multiply_matrices(A, B, C);

    printf("Resultado da multiplicação:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
