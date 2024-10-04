#include <stdio.h>
int reverseInteger(int);
int main() {
    printf("123->%d\n", reverseInteger(123));
    printf("120->%d\n", reverseInteger(120));
    return 0;
}
int reverseInteger(int n){
    int ans = 0;
    while (n != 0){
        int digit = n % 10;
        ans = ans * 10 + digit;
        n = n / 10;
    }
    return ans;
}