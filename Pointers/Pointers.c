#include <stdio.h>
int main() {
    int a = 10;
    printf("Address of a using address operator: %p\n", &a); // hexa address
    printf("Address of a using address operator: %x\n", &a); // base address
    int * ptr = &a;
    printf("Address of a using pointer: %p\n", ptr); // hexa address
    printf("Address of a using pointer: %x\n", ptr); // base address
    printf("Value of a using variable a: %d\n", a);
    printf("Value of a using pointer ptr: %d\n", *ptr);
    int **dPtr = &ptr; //(Pointer to a pointer) double pointer
    printf("Address of pointer using ptr: %x\n", &ptr);
    printf("Address of pointer using dPtr: %x\n", dPtr);
    printf("Value of a using dPtr: %d\n", **dPtr); // 10
    printf("Size of a pointer: %llu bytes.\n", sizeof(ptr));
    printf("%d\n", *(&a));
    return 0;
}
