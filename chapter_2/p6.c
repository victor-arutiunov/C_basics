/* Program 2.6 Division with float values */
#include <stdio.h>

int main(void) {
    float plank_length = 10.0f;
    float piece_count = 4.0f;
    float piece_length = 0.0f;

    piece_length = plank_length/piece_count;

    printf("A plank length %.2f could be divided into %.2f parts %.2f each",
           plank_length,
           piece_count,
           piece_length);

    return 0;
}
