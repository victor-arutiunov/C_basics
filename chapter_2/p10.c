// Program  2.10 Choose the correct type
#include <stdio.h>

int main(void) {
    const float Revenue_Per_150 = 4.5f;
    unsigned short JanSold = 23500;
    unsigned short FebSold = 19300;
    unsigned short MarchSold = 21600;
    float RevQuarter = 0.0f;

    unsigned long QuarterSold = JanSold + FebSold + MarchSold;
    RevQuarter = (float)QuarterSold/150*Revenue_Per_150;

    printf("Total stock sold in this quarter is: %lu\n", QuarterSold);
    printf("The revenue per quarter is: $%.2f\n", RevQuarter);
    
    return 0;
}
