#include <stdio.h>

int main() {
    int i;
    float f;

    printf("Enter an integer: ");
    scanf("%d", &i);
    printf("Enter a float: ");
    scanf("%f", &f);

    printf("You entered integer: %d and float: %.2f\n", i, f);
    return 0;
}
