// Name: Bhavya Okte
// ERP: 10390
// Program: Max and Min in 2D array

#include <stdio.h>

int main() {
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int max = a[0][0], min = a[0][0];

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(a[i][j] > max)
                max = a[i][j];
            if(a[i][j] < min)
                min = a[i][j];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}

/*
Sample Output:
Enter rows and columns: 2 3
Enter elements:
5 1 7
3 9 2
Maximum = 9
Minimum = 1
*/
