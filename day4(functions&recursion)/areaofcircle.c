#include <stdio.h>

float areaCircle(float r) {
    return 3.14 * r * r;
}

int main() {
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Area of Circle = %.2f\n", areaCircle(radius));

    return 0;
}