/* Program 2.3 Simple calculations */
#include <stdio.h>

int main(void) {
    int total_pets,
        cats,
        dogs,
        ponies,
        others;
    
    cats = 4;
    dogs = 0;
    ponies = 2;
    others = 3;

    total_pets = cats + dogs + ponies + others;

    printf("We have %d pets in our zoo\n", total_pets);

    return 0;
}
