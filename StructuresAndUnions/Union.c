#include <stdio.h>
#include <string.h>
union Employee {
    char name[20]; // Static
    int age;
    int empID;
};
int main() {
    union Employee e1;
    // e1.name = "Sahana"; // Static memory not allowed
    strcpy(e1.name, "Sahana");
    printf("Name: %s\n", e1.name);
    e1.age = 31;
    printf("Age: %d\n", e1.age);
    e1.empID = 1001;
    printf("Emp ID: %d\n", e1.empID);
    printf("Size of union is: %llu bytes\n", sizeof(e1));
    return 0;
}
