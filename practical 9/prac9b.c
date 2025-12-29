// Name: Bhavya OKTE
// ERP: 10390
// Program: Maximum and Minimum in array

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

    int max = arr[0], min = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}

/*
Sample Output:
Enter size of array: 5
Enter 5 elements:
10 3 5 8 1
Maximum = 10
Minimum = 1
*/