#include <stdio.h>
int main()
{
    float ht, wt, bmi;
    printf("enter the height and weight:");
    scanf("%f %f", &ht, &wt);
    bmi = wt / (ht * ht);
    if (bmi < 15)
    {
        printf("starvation");
    }
    else if (bmi > 17.6 && bmi < 18.5)
    {
        printf("underweight");
    }
    else if (bmi > 25 && bmi < 25.9)
    {
        printf("overweight");
    }
    else
    {
        printf("obese");
    }
    return 0;
}
