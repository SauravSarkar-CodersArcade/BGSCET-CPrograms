#include <stdio.h>
void swapNumbers(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swapCharacters(char * a, char * b){
    char temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a = 10;
    int b = 20;
    char c = 'c';
    char d = 'd';
    printf("Before swap a=%d, b=%d\n", a,b);
    swapNumbers(&a,&b);
    printf("After swap a=%d, b=%d\n", a,b);
    printf("Before swap c=%c, d=%c\n", c,d);
    swapCharacters(&c,&d);
    printf("After swap c=%c, d=%c\n", c,d);
    return 0;
}
