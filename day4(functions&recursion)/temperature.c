#include <stdio.h>

float convert(float c) {
    return (c * 9 / 5) + 32;
}

int main() {
    float celsius;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    printf("Fahrenheit = %.2f\n", convert(celsius));

    return 0;
}