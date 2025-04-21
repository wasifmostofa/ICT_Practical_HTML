#include <stdio.h>

int main() {
    int y;

    printf("Enter a year to be tested: ");
    scanf("%d", &y);

    if ((y % 400 == 0)|| (y % 4 == 0 && y % 100 != 0) ) {
        printf("The year %d is a leap year.\n", y);
    } else {
        printf("The year %d is not a leap year.\n", y);
    }


    return 0;
}