#include <stdio.h>
// In a loop ++i or i++ remains same
int main() {
    for (int i = 0; i < 10; ++i) {
        printf("%d ", i); // 0 to 9
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", i); // 0 to 9
    }
    return 0;
}
