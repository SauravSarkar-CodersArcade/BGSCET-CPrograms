#include <stdio.h>

int main() {
    double principal, time, rate;
    printf
    ("Enter the Principal(Rs), Time(Yrs) & Rate Of Interest(Annually):\n");
    scanf
    ("%lf %lf %lf", &principal, &time, &rate);

    double simpleInterest = principal * time * rate * 0.01;
    printf("The Simple Interest is: Rs. %.2lf", simpleInterest);
    return 0;
}
