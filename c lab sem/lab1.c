#include <stdio.h>

int main() {
    int R, N;
    printf("Enter the values for R and N: ");
    scanf("%d %d", &R, &N);

    int totalSum = 0;
    for (int i = 0; i < R; ++i) {
        int sum = 0;
        for (int j = 1; j <= N; ++j) {
            sum += j;
        }
        totalSum += sum;
        N = sum; // Update N for the next iteration
    }

    printf("Total Sum after %d iterations: %d\n", R, totalSum);

    return 0;
}