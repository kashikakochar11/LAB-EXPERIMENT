//WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.
#include <stdio.h>

int main(){
    int x1,y1,x2,y2,x3,y3,area;
    area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    printf("Enter coordinates for all three points on one line (x1 y1 x2 y2 x3 y3): ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    if (area == 0) {
        printf("Result: The three points are COLLINEAR.\n");
    } else {
        printf("Result: The three points are NOT COLLINEAR.\n");
    }
return 0;
    }