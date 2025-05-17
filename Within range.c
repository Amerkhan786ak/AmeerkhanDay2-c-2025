#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 10 && num <= 100)
        printf("%d is within range [10, 100].\n", num);
    else
        printf("%d is out of range.\n", num);

    return 0;
}
