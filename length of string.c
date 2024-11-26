#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Length of string: %lu\n", strlen(str) - 1); // Subtract 1 to exclude the newline
    return 0;
}
