#include <stdio.h>

int main() {
    char ch;
    printf("Enter any character:\n");
    scanf("%c", &ch);
    int ascii = (int) ch;  // Explicit
    // Implicit -> Compiler
    // Explicit -> User
    printf("The ASCII value for %c is %d.\n", ch,ascii);
    return 0;
}
