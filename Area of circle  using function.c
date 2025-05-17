#include <stdio.h>
#define PI 3.14159

float areaOfCircle(float r) {
    return PI * r * r;
}

int main() {
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Area = %.2f\n", areaOfCircle(r));
    return 0;
}
