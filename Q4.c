//Write a C program to add two numbers, take number from user
#include <stdio.h>
int main() {
    int N1, N2, sum;

    // Input two numbers from user
    printf("Enter two numbers");
    scanf("%d,%d", &N1, &N2);
    sum = N2 + N1;
    // Output the sum
    printf("The sum of %d and %d is %d\n:", N1,N2, sum);
    return 0;
} 
