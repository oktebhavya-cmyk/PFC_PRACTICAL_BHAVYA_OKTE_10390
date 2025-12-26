#include <stdio.h> 
int main() { 
    int n=5; 
    printf("Enter the half height of diamond (n): "); 
     
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
    
    //hourglass
    int topRows=(n+1)/2;
    for (int i = 0; i < topRows; i++) { 
        int spaces = i; 
        int stars = n - 2 * i; // Decreases as i increases 
        // Stop if stars become 0 or negative 
        if (stars <= 0) { 
            break; 
        } 
        // Print leading spaces 
        for (int s = 0; s < spaces; s++) { 
        printf(" ");
        } 
        // Print stars 
        for (int j = 0; j < stars; j++) { 
            printf("*"); 
        } 
        printf("\n"); 
    } 
    // Lower half 
    for (int i = topRows - 2; i >= 0; i--) { 
        int spaces = i; 
        int stars = n - 2 * i; 
        // Print leading spaces 
        for (int s = 0; s < spaces; s++) { 
            printf(" "); 
        } 
        // Print stars 
        for (int j = 0; j < stars; j++) { 
            printf("*"); 
        } 
        printf("\n"); 
    } 
    char ch='A';
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            printf("%c",ch);
            ch++;
    }
    printf("\n");
    ch='A';
}
return 0;
}