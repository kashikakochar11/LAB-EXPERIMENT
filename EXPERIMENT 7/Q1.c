/*Develop a recursive to find the factorial of a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n)
= n * FACT(n-1). Using this function, write a C program to compute the binomial coefficient. Tabulate the results
 for different values of n and r with suitable messages*/ 
#include <stdio.h>

// Function to correctly calculate the factorial recursively
int fact (int n){
    
    if(n == 0 || n == 1){ 
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{
    int factorial;
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    factorial = fact(n);
    
    printf("The factorial of %d is: %d\n", n, factorial);
    
    return 0;
}