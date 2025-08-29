#include <stdio.h>

int main(){

    // 0 for false, any other value true
    _Bool a = 1;
    _Bool b = 1;
    _Bool result = a && b;

    printf("%d", result);

    return 0;
}