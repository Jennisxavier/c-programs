#include<stdio.h>

int main() {
    float arr[6];
    float sum=0.0;
    // int arr2[6];

    for (int i = 0; i < 6; i++) {
        printf("Enter marks for sub%d: ", i + 1);
        scanf("%f", &arr[i]);
        sum+=arr[i];
    }
    printf("total %.2f\n",sum);
    float avg=sum/600*100;
    printf("avg is %.2f",avg);
    return 0;
}