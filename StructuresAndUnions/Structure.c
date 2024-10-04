#include <stdio.h>
#include <string.h>
struct Employee {
    char name[20]; // Static
    int age;
    int empID;
};
int main() {
    struct Employee e1;
    // e1.name = "Sahana"; // Static memory not allowed
    strcpy(e1.name, "Sahana");
    e1.age = 31;
    e1.empID = 1001;
    printf("Name: %s\n", e1.name);
    printf("Age: %d\n", e1.age);
    printf("Emp ID: %d\n", e1.empID);
    printf("Size of struct is: %llu bytes\n", sizeof(e1));
    return 0;
}
