#include <stdio.h>

int main() {
    int hoursInADay;
    printf("Enter the number of hours in a day:\n");
    scanf("%d", &hoursInADay);
    int secondsInADay = hoursInADay * 60 * 60; // hrs x minutes x secs
    printf("The no of seconds in a day is: %d secs.\n", secondsInADay);
    return 0;
}
