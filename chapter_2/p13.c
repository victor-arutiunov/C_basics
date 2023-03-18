// Program 2.13 Enumerators
#include <stdio.h>

int main(void) {
    enum Weekday {Monday = 1, Tuesday, Wednesday, Thursday, Friday, Suturday, Sunday};
    enum Weekday today = Tuesday;

    printf("Today is the %d day of the week\n", today);
    
    return 0;
}
