#include <stdio.h>

int main() {
    int number, n, dig, prod;

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &number);
        n = number; // Store the input number in a separate variable
        
        prod = 1; // Resetting product for each number

        // Calculating the product of digits
        while (n > 0) {
            dig = n % 10;
            prod = dig * prod;
            n = n / 10;
        }

        printf("Product of digits of %d is: %d\n", number, prod);
    }

    return 0;
}
