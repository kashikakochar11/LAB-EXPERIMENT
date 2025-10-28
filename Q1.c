/*WAP a C program to calculate the area and perimeter of a rectangle based on
its length and width.*/
#include <stdio.h>
int main() {
    float length, breadth, area, perimeter;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%f ,%f", &length, &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("for rectangle of length %.2f and breadth %.2f \narea = %.2f \nperimeter = %.2f\n", length, breadth, area, perimeter);
    return 0;
}
