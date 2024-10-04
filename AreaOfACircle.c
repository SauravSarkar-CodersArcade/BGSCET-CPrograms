#include <stdio.h>
#define PI 3.14
int main() {
    double radius;
    printf("Enter the radius of the circle:\n");
    scanf("%lf", &radius);
    double area = PI * radius * radius;
    printf("The area of the circle is: %.2lf sq. units.\n", area);
    return 0;
}
