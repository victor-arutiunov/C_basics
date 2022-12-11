/* Program 2.4 Calculations with cookies */
#include <stdio.h>

int main(void) {
    int cookies = 5;
    int cookies_calories = 42;
    int total_eaten = 0;

    int eaten = 2;
    cookies = cookies - eaten;
    total_eaten = total_eaten + eaten;
    printf("I have eaten %d cookies,"
           "%d cookies left after my hunt\n",
           eaten,
           cookies);
    
    eaten = 3;
    cookies = cookies - eaten;
    total_eaten = total_eaten + eaten;
    printf("I have eaten %d more,"
           " %d cookies left and my manna if full\n",
           eaten,
           cookies);
    
    int total_calories = cookies_calories * total_eaten;
    printf("You consumed %d calories in summary."
           " You are totally a fat pig!\n",
           total_calories);

    return 0;
}
