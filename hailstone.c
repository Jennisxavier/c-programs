#include <stdio.h>

void printHailstoneSeries(int x) {
    while (x != 1) {
        printf("%d, ", x);

        if (x % 2 == 0) {
            x = x / 2;  // If x is even
        } else {
            x = 3 * x + 1;  // If x is odd
        }
    }

    printf("1\n");  // Print the final term (1)
}

int main() {
    int startingInteger;

    // Get the starting integer from the user
    printf("Enter a positive integer to start the Hailstone series: ");
    scanf("%d", &startingInteger);

    //if (startingInteger <= 0) {
    //    printf("Please enter a positive integer.\n");
      //  return 1; // Exit with an error code
   // }

    // Print the Hailstone series
    //printf("Hailstone series starting from %d: ", startingInteger);
    printHailstoneSeries(startingInteger);

    return 0; // Exit successfully
}
