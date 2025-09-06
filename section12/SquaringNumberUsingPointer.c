// create a program that uses a function
// the function must receive a pointer and calculate the square
// no value must be returned, the main objective is using pointer to
// evaluate passing by reference 


#include <stdio.h>
#include <math.h>

void squareNumber(int *number);

int main(int argc, char const *argv[])
{
    int number = 16;
     printf("square of %i\n", number);
    int *pNumber = &number;
    squareNumber(pNumber);

    printf("is %i", number);
    return 0;
}

void squareNumber(int *number){

    *number = sqrt(*number);
}
