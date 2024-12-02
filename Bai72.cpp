#include <stdio.h>
#include <math.h>
int bacthang(long long a[100][100], int m, int n) {
    int rank = n;
    for (int row = 0; row < rank; row++) {
        if (a[row][row] == 0) {
            int found = 0;
            for (int i = row + 1; i < m; i++) {
                if (a[i][row] != 0) {
                    for (int j = 0; j < n; j++) {
                        long long temp = a[row][j];
                        a[row][j] = a[i][j];
                        a[i][j] = temp;
                    }
                    found = 1;
                    break;
                }
            }
            if (!found) {
                rank--;
                for (int i = 0; i < m; i++) {
                    a[i][row] = a[i][rank];
                }
                row--;
                continue;
            }
        }

        for (int i = row + 1; i < m; i++) {
            if (a[row][row] == 0) continue; 
            double heso = (double)a[i][row] / a[row][row];
            for (int j = row; j < n; j++) {
                a[i][j] -= heso * a[row][j];
            }
        }
    }
    return rank;
}

void nhapMaTran(long long a[100][100], int *m, int *n) {
    scanf("%d %d", m, n);
    for (int i = 0; i < *m; i++) {
        for (int j = 0; j < *n; j++) {
            scanf("%lld", &a[i][j]);
        }
    }
}

void inMaTran(long long a[100][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%lld ", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    long long a[100][100];
    int m, n;

    nhapMaTran(a, &m, &n);

    
    inMaTran(a, m, n);

    int rank = bacthang(a, m, n);

    printf("%d\n", rank);

    return 0;
}