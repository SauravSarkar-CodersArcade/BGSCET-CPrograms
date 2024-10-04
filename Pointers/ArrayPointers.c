#include <stdio.h>

int main() {
    int arr[] = {4,1,2,3,6,8};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%p\n", arr);
    printf("%d\n", *arr);
    for (int i = 0; i < size; ++i) {
        printf("%d ", *arr+i); // 1st + i
    }
    printf("\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", *(arr+i)); // all elements
    }
    return 0;
}
