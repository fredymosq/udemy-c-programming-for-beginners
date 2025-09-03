// Calculate grates common division fo tow non negative numbers
// Calculate de absolute number
// Calculate the square root of a number, don't use  math.h helper function


#include <stdio.h>
#include <math.h>

int greatestCommonDivisor(int numberA, int numberB);
int absoluteNumber(int numberB);
int squareRoot(int number);

int main(int argc, char const *argv[])
{
    int a = 150;
    int b = 35;
    int gcd = greatestCommonDivisor(a, b);
    printf("Greatest common division of %i, and %i is %i\n", a, b, gcd);
    return 0;
}


int greatestCommonDivisor(int numberA, int numberB){

    numberA =  absoluteNumber(numberA);
    numberB = absoluteNumber(numberB);

    while (numberB != 0)
    {
        int temp = numberB;
        numberB = numberA % numberB;
        numberA = temp;
    }

    return numberA;
}

int absoluteNumber(int number){
    return number < 0 ? -number : number;
}

int squareRoot(int number){

    if (number < 0)
    {
        printf("Square root can be calculate for a negative number");
        return 0;
    }

    return sqrt(number);
    
}

