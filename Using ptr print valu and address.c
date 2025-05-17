#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;

    printf("Value: %d\n", *ptr);
    printf("Address: %p\n", ptr);
    return 0;
}
