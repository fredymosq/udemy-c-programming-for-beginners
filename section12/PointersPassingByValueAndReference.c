
// create tow functions that demonstrate passing by function and reference using pointers

#include <stdio.h>

void swap(int a, int b);
void swapUsingPointers(int *a, int *b);

int main(int argc, char const *argv[])
{
    int a = 100;
    int b = 200;

    printf("Value of a before swapping: %i\n", a);
    printf("Value of b before swapping: %i\n", b);

    swap(a, b);

    printf("Value of a after swapping: %i\n", a);
    printf("Value of b after swapping: %i\n", b);

    printf("Value of a before swapping using pointer: %i\n", a);
    printf("Value of b before swapping using pointer:: %i\n", b);

    swapUsingPointers(&a, &b);

    printf("Value of a after swapping using pointer:: %i\n", a);
    printf("Value of b after swapping using pointer:: %i\n", b);

    return 0;
}


void swap(int a, int b){

    int temp = a;
    a = b;
    b = temp;

}


void swapUsingPointers(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}