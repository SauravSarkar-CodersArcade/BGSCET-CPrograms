#include <stdio.h>
union Temperature {
    float celsius;
    float fahrenheit;
};
float celsiusToFahrenheit(float c){
    return (c * 9 / 5) + 32;
}
float fahrenheitToCelsius(float f){
    return (f - 32) * 5 / 9;
}
int main() {
    union Temperature temp;
    int choice;
    printf("Enter one choice between 1(Celsius) & 2(Fahrenheit):\n");
    scanf("%d", &choice);
    if(choice == 1){
        printf("Enter the temperature in celsius:\n");
        scanf("%f", &temp.celsius);
        printf("The fahrenheit value is: %.2f degrees.\n",
               celsiusToFahrenheit(temp.celsius));
    }else{
        printf("Enter the temperature in fahrenheit:\n");
        scanf("%f", &temp.fahrenheit);
        printf("The celsius value is: %.2f degrees.\n",
               fahrenheitToCelsius(temp.fahrenheit));
    }
    return 0;
}
