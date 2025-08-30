// Create a C program that displays the byte size of basic types supported in C
/*

    int
    char
    long
    long long
    double
    long double

    %zd format

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int myInteger = 254;
    char myChar = 'A';
    long myLong = 455L;
    long long myLongLong = 365L;
    long double myLongDouble = 720;
    double myDouble = 533.0;

    printf("sizeof integer: %zd\n", sizeof(myInteger));
    printf("sizeof char: %zd\n", sizeof(myChar));
    printf("sizeof long: %zd\n", sizeof(myLong));
    printf("sizeof long long : %zd\n", sizeof(myLongLong));
    printf("sizeof long double: %zd\n", sizeof(myLongDouble));
    printf("sizeof double: %zd\n", sizeof(myDouble));

    return 0;
}
