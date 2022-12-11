/* Program 2.5 Cookies and pinguins */
#include <stdio.h>

int main(void) {
    int cookies = 54;
    int pinguins = 11;
    int cookies_for_pinguin = 0;
    int cookies_left_over = 0;

    cookies_for_pinguin = cookies/pinguins;
    printf("We have %d pinguins and %d cookies\n",
           pinguins,
           cookies);
    printf("We can give %d cookies for each pinguin\n",
           cookies_for_pinguin);

    cookies_left_over = cookies % pinguins;
    printf("Finally, after feeding the pinguins we have %d cookies\n",
           cookies_left_over);

    return 0;
}
