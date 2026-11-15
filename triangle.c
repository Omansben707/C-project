#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    printf("--- Right-Angled Triangle Checker ---\n");
    printf("Enter the first two angles of the triangle: ");
    if (scanf("%f %f", &angle1, &angle2) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    // Validate triangle angles
    if (angle1 <= 0 || angle2 <= 0 || (angle1 + angle2) >= 180) {
        printf("Invalid angles! The sum of two angles must be less than 180 and greater than 0.\n");
        return 1;
    }

    // Calculate the third angle
    angle3 = 180.0 - (angle1 + angle2);
    printf("The third angle is: %.2f degrees\n", angle3);

    // Check for a right angle (90 degrees)
    if (angle1 == 90.0 || angle2 == 90.0 || angle3 == 90.0) {
        printf("Result: This IS a right-angled triangle!\n");
    } else {
        printf("Result: This is NOT a right-angled triangle.\n");
    }

    return 0;
}
