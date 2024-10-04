#include <stdio.h>
int hammingWeight(int); // Function Prototype
int main() {
    // Actual Values to function 11,1,15 -> Arguments
    printf("HW->11 :%d\n", hammingWeight(11));
    printf("HW->1 :%d\n", hammingWeight(1));
    printf("HW->15 :%d\n", hammingWeight(15));
    return 0;
}
int hammingWeight(int n){ // Function Signature Parameter(n)
    // Function Body - Function Definition
    int count = 0;
    while (n > 0){
        if(n & 1){
            count++;
        }
        n = n >> 1;
    }
    return count;
}
