#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", p);
    printf("Value pointed by p: %d\n", *p);

    return 0;
}
