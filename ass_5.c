#include <stdio.h>
#include <string.h> // For strlen function

int main() {
    char str[] = "Hello, World!";
    // Calculate the length of the string
    int length = strlen(str);

    // Print the length of the string
    printf("Length of the string is %d\n", length);

    return 0;
}
