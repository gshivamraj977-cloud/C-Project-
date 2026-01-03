#include <stdio.h>

int main() {
    // Step 1: Declare a variable for balance and give it an initial value
    int balance = 10000;
    int withdrawAmount;

    // Step 2: Ask the user to enter the withdrawal amount
    printf("Enter the amount to withdraw: ");

    // Step 3: Take the withdrawal amount as input
    scanf("%d", &withdrawAmount);

    // Step 4: Check if the entered amount is greater than zero
    if (withdrawAmount > 0) {

        // Step 5: Compare the amount with the balance
        if (withdrawAmount <= balance) {

            // Step 6 & 7: Allow withdrawal and update balance
            balance = balance - withdrawAmount;

            // Step 8: Print updated balance
            printf("Withdrawal successful!\n");
            printf("Updated balance: %d\n", balance);

        } else {
            // Step 9: Insufficient balance
            printf("Insufficient balance!\n");
        }

    } else {
        // Step 10: Invalid amount
        printf("Invalid withdrawal amount!\n");
    }

    return 0;
}
