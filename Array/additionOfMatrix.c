#include <stdio.h>
int main() {
    int A[100][100], B[200][100], C[100][100];
    int i, j, rA, cA, rB, cB;

    printf("Number of rows and columns in A:\n");
    scanf("%d %d", &rA, &cA);
    printf("Number of rows and columns in B:\n");
    scanf("%d %d", &rB, &cB);

    for (i = 0; i < rA; i++) {
        for (j = 0; j < cA; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < rB; i++) {
        for (j = 0; j < cB; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < rA; i++) {
        for (j = 0; j < cA; j++) {
            C[i][j] = A[i][j];
        }
    }
    for (i = 0; i < rB; i++) {
        for (j = 0; j < cB; j++) {
            C[rA + i][j] = B[i][j];
        }
    }

    int rC = rA + rB;
    int cC = cA;  

    printf("The Matrix after addition:\n");
    for (i = 0; i < rC; i++) {
        for (j = 0; j < cC; j++) {
            printf("%10d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
