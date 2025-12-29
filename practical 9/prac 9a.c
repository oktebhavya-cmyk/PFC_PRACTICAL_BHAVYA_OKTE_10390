// Name: Bhavya Okte 
// ERP: 10390
// Program: Reverse an array

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reversed array:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
Sample Output:
Enter size of array: 5
Enter 5 elements:
1 2 3 4 5
Reversed array:
5 4 3 2 1
*/