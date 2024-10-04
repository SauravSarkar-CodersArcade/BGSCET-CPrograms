#include <stdio.h>
int main() {
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    if(n & 1){
        if(n % 3 == 0)
            printf("Odd & Div By 3");
        else
            printf("Odd & Not Div By 3");
    } else{
        if(n % 4 == 0)
            printf("Even & Div By 4");
        else
            printf("Even & Not Div By 4");
    }
    return 0;
}
