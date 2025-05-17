#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, area;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("Area = %.2f\n", area);
    return 0;
}
