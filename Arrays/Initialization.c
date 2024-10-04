#include <stdio.h>

int main() {
    int arr1[] = {2, 4, 6, 8, 5,7,9};
    // Formula for Dynamic Size of an array
    int s1 = sizeof(arr1) / sizeof(arr1[0]); // 7x4 = 28 / 4 = 7
    for (int i = 0; i < s1; ++i) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    int arr2[5] = {3,2,1};
    for (int i = 0; i < 5; ++i) {
        printf("%d ", arr2[i]);
    }
    return 0;
}
