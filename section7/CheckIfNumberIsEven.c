// Program to determine if a number is even or odd

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numberToTest;
    int remainder;

    printf("Enter you number to be tested:\n");
    scanf("%i", &numberToTest);

    remainder = numberToTest % 2;
    
    if (remainder == 0)
    {
        printf("Number %i is Even\n", numberToTest);
    }
    else
    {
        printf("Number %i is Odd\n", numberToTest);
    }
    

    return 0;
}
