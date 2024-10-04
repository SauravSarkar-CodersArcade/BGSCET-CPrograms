#include <stdio.h>
int * function(){ // Scope 1
    static int data = 20; // Global
    return &data;
}
int main() { // Scope 2
    int x = 10;
    int * ptr = function();
    printf("The value of data is: %d\n", *ptr);
    return 0;
}
