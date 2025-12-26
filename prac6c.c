#include <stdio.h>
int main() {
    int correct_pin = 1234; 
    int entered_pin;
    int attempts;
    int max_attempts = 3;
    int pin_matched = 0; 
    for (attempts = 1; attempts <= max_attempts; attempts++) {
        printf("Enter your secret PIN number: ");
        scanf("%d", &entered_pin);

        if (entered_pin == correct_pin) {
            pin_matched = 1;
            break; 
        } else {
            printf("Invalid PIN. ");
            if (attempts < max_attempts) {
                printf("%d attempt(s) remaining.\\n", max_attempts - attempts);
            }
        }
    }

    
    if (pin_matched) {
        printf("\\nAccess Granted. Welcome to the ATM service.\\n");
    
    } else {
        printf("\\nMaximum attempts reached. Your card is locked.\\n");
    }
return 0;
}