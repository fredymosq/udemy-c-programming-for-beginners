// create 4 variables
// width, height, perimeter, area
// perimeter is calculated by adding the heigh and width and multiplying by two
// area is calculated by multiplying the with * height variables

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    float width = atoi(argv[1]);
    float height = atoi(argv[2]);
    float perimeter = (width + height) * 2;
    float area = width * height;

    printf("number of arguments: %i\n", argc);
    printf("Rectangle of width = %f and height = %f has a perimeter = %f\n", width, height, perimeter);
    printf("Rectangle of width = %f and height = %f has an area = %f\n", width, height, area);

    return 0;
}