#include <stdio.h>

// Function to add two matrices
void add(int a[10][10], int b[10][10], int r, int c) {
    int i, j, sum[10][10];
    printf("\nAddition of matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

// Function to find saddle point
void saddle(int a[10][10], int r, int c) {
    int i, j, k, min, col, found = 0;

    for(i = 0; i < r; i++) {
        min = a[i][0];
        col = 0;

        for(j = 1; j < c; j++) {
            if(a[i][j] < min) {
                min = a[i][j];
                col = j;
            }
        }

        for(k = 0; k < r; k++) {
            if(a[k][col] > min)
                break;
        }

        if(k == r) {
            printf("\nSaddle point = %d\n", min);
            found = 1;
        }
    }

    if(!found)
        printf("\nNo saddle point found\n");
}

// Function to find inverse of 2x2 matrix
void inverse2x2(int a[2][2]) {
    int det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

    if(det == 0) {
        printf("\nInverse not possible (determinant = 0)\n");
        return;
    }

    printf("\nInverse matrix:\n");
    printf("%.2f %.2f\n", (float)a[1][1]/det, (float)-a[0][1]/det);
    printf("%.2f %.2f\n", (float)-a[1][0]/det, (float)a[0][0]/det);
}

// Function to check magic square
void magicSquare(int a[10][10], int n) {
    int i, j, sum = 0, temp;

    for(j = 0; j < n; j++)
        sum += a[0][j];

    for(i = 1; i < n; i++) {
        temp = 0;
        for(j = 0; j < n; j++)
            temp += a[i][j];
        if(temp != sum) {
            printf("\nNot a magic square\n");
            return;
        }
    }

    printf("\nMagic square\n");
}

int main() {
    int a[10][10], b[10][10], r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix A:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter matrix B:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    add(a, b, r, c);
    saddle(a, r, c);

    if(r == 2 && c == 2)
        inverse2x2(a);

    if(r == c)
        magicSquare(a, r);

    return 0;
}