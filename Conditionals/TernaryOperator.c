#include <stdio.h>
int main() {
    int a = 10;
    (a < 10) ? printf("True\n") : printf("False\n");
    (a == 10) ? printf("True\n") : printf("False\n");
    // Find the greatest of 3 nos using ternary operator;
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    int greatest = (num1 > num2) ?
                   ((num1 > num3) ? num1 : num3)
                   : ((num2 > num3) ? num2 : num3);
    printf("\nThe greatest is: %d\n", greatest);

    return 0;
}
