#include <stdio.h>

int _islower(int c) {
    if (c >= 'a' && c <= 'z') {
        return 1;
    }
    return 0;
}

int main() {
    char ch = 'A';
    int result = _islower(ch);
    if (result == 1) {
        printf("The character '%c' is lowercase.\n", ch);
    } else {
        printf("The character '%c' is not lowercase.\n", ch);
    }
    return 0;
}
