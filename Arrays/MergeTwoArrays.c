#include <stdio.h>
void mergeArrays(int a1[], int n1, int a2[], int n2, int a3[]){
    for (int i = 0; i < n1; ++i) {
        a3[i] = a1[i];
    }
    for (int i = 0; i < n2; ++i) {
        a3[n1+i] = a2[i];
    }
}
int main() {
    int a1[4] = {1,2,3,4};
    int a2[5] = {5,6,7,8,9};
    int a3[9] = {0};
    mergeArrays(a1,4,a2,5,a3);
    for (int i = 0; i < 9; ++i) {
        printf("%d ", a3[i]);
    }
    printf("\n");
    return 0;
}
