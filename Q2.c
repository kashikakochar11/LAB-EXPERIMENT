//o find the greatest common divisor (GCD) of two numbers using recursion.
#include <stdio.h>
int gcd(int a, int b)
{
    if (a == 0) {
        return b;
    }
    return gcd(b % a, a);
}

int main() {
    int num1,num2;
    printf("Enter two numbers: ");
   scanf("%d %d", &num1, &num2);
    printf("GCD of %d and %d = %d\n",num1,num2,gcd(num1,num2));
    return 0;
}