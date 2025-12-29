// Name: Bhavya Okte
// ERP: 10390
// Program: Sum of even elements in array

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            sum += arr[i];
    }

    printf("Sum of even elements = %d", sum);

    return 0;
}

/*
Sample Output:
Enter size of array: 6
Enter 6 elements:
2 5 7 8 4 1
Sum of even elements = 14
*/