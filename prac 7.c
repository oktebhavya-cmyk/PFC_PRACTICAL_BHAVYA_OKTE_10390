#include <stdio.h> 
int main() { 
    int n; 
    printf("Enter the half height of diamond (n): "); 
    scanf("%d", &n); 
    // Upper half (including middle row) 
    for (int i = 1; i <= n; i++) { 
        // Spaces before stars 
        for (int s = 1; s <= n - i; s++) { 
            printf(" "); 
        } 
        // Stars 
        for (int j = 1; j <= 2 * i - 1; j++) { 
            printf("*"); 
        } 
        printf("\n"); 
    } 
    // Lower half (excluding middle row) 
    for (int i = n - 1; i >= 1; i--) { 
        // Spaces 
        for (int s = 1; s <= n - i; s++) { 
            printf(" "); 
} 
        // Stars 
        for (int j = 1; j <= 2 * i - 1; j++) { 
            printf("*"); 
        } 
        printf("\n"); 
    } 
    return 0;
}