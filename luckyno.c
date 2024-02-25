#include <stdio.h>

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);

    int digitCount[10] = {0};  // Array to store the frequency of each digit

    // Calculate digit frequencies
    while (num > 0) {
        int digit = num % 10;
        digitCount[digit]++;
        num /= 10;
    }

    printf("Lucky Digits are: ");
    int hasLuckyDigit = 0;

    // Check for lucky digits
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > 0 && digitCount[i] == i) {
            if (hasLuckyDigit) {
                printf(", ");
            }
            printf("%d", i);
            hasLuckyDigit = 1;
        }
    }

    if (!hasLuckyDigit) {
        printf("None");
    }

    printf("\n");

    return 0;
}
