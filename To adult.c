#include <stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("Adult\n");
    } else {
        printf("Not an adult\n");
    }
    return 0;
}
