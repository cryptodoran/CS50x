#include <stdio.h>

int main()
{
    int n, i;
    float num[100], sum = 0.0, avg;

    printf("Enter a list of numbers between 1 and 100: ");
    scanf("%d", &n);

    while (n > 100 || n < 1)
    {
        printf("Error! \n");
        printf("Enter list of numbers: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("Average = %.2f\n", avg);
    return 0;
}