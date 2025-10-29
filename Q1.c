/*WAP to take check if the triangle is valid or not. If the validity is established, do
check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides
of the triangle as input from a user*/

#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) {
        printf("The triangle with side lengths %.2f, %.2f, and %.2f is valid.\n", side1, side2, side3);

        if (side1 == side2 && side2 == side3) {
            printf("The valid triangle is Equilateral.\n");
        } else if (side1 == side2 || side2 == side3 || side3 == side1) {
            printf("The valid triangle is Isosceles.\n");
        } else {
            printf("The valid triangle is Scalene.\n");
        }

    } else {
        printf("The given side lengths do not form a valid triangle.\n");
    }

    return 0;
}