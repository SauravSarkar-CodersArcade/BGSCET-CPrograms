#include <stdio.h>
// CLION -> Intellisense
int main() {
    int a = 0; // Indentation => 4 spaces 1 Tab
    if (a < 0)
        printf("Positive");
    else if(a > 0)
        printf("Negative");
    else
        printf("Zero");
    return 0;
}
