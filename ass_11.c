#include <stdio.h>

int main() {
    int hours, minutes;

    // Prompt the user to enter the time
    printf("Enter the time in HH:MM format: ");
    scanf("%d:%d", &hours, &minutes);

    // Print the time in the desired format
    printf("%d Hour and %d Minute\n", hours, minutes);

    return 0;
}
