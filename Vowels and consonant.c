#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        if (c == 'a'|| c == 'e'|| c == 'i'|| c == 'o'|| c == 'u'||
            c == 'A'|| c == 'E'|| c == 'I'|| c == 'O'|| c == 'U')
            printf("%c is a vowel.\n", c);
        else
            printf("%c is a consonant.\n", c);
    } else {
        printf("Not an alphabet.\n");
    }

    return 0;
}
