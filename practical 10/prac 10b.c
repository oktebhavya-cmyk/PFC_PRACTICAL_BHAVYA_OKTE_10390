// Name: Bhavya Okte
// ERP: 10390
// Program: Sum of diagonal elements

#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        sum += a[i][i];
    }

    printf("Sum of diagonal = %d", sum);

    return 0;
}

/*
Sample Output:
Enter size of square matrix (n x n): 3
Enter elements:
1 2 3
4 5 6
7 8 9
Sum of diagonal = 15
*/