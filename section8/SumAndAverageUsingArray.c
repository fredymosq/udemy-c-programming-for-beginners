// Calculate the sum and average of values in a array

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int grades[10];
    int count  = 10;
    int sum = 0;
    double average = 0;

    printf("Enter the 10 grades\n");

    for (int i = 0; i < count; i++)
    {
        printf("%2u>", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    average = (float)sum / count;

    printf("\nAverage of ten grades is %.2f\n", average);
    
    return 0;
}
