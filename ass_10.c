#include <stdio.h>

int main() {
    int day, month, year;

    // Prompt the user to enter the date
    printf("Enter the date in DD/MM/YYYY format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    // Print the date in the desired format
    printf("Day – %02d , Month – %02d , Year – %04d\n", day, month, year);

    return 0;
}
