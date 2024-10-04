#include <stdio.h>
void printZeroOneMatrix(int n){
    for (int r = 1; r <= n; ++r) {
        for (int c = 1; c <= r ; c++) {
            if((r+c) % 2 == 0){
                printf(" 0 ");
            } else{
                printf(" 1 ");
            }
        }
        printf("\n");
    }
}
void printOneZeroMatrix(int n){
    for (int r = 1; r <= n; ++r) {
        for (int c = 1; c <= r ; c++) {
            if((r+c) % 2 == 0){
                printf(" 1 ");
            } else{
                printf(" 0 ");
            }
        }
        printf("\n");
    }
}
int main() {
    printZeroOneMatrix(5);
    printOneZeroMatrix(5);
    return 0;
}
