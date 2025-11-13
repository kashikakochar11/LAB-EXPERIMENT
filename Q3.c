/*Declare variables within different code blocks (enclosed by curly braces) and
test their accessibility within and outside those blocks.*/
#include <stdio.h>

int main() {
    // 'a' is defined in the main function's scope
    int a = 5; 

    // --- Inner Block Scope Starts ---
    { 
        // 'b' is local to this block
        int b = 10; 
        
        // Both 'a' (from outer scope) and 'b' (from inner scope) are accessible
        printf("Inside Block: Variable a = %d, Variable b = %d\n", a, b); 
        
    }

    // Only 'a' is accessible in this outer scope
    printf("Outside Block: Variable a = %d\n", a);
    
    // Attempting to access 'b' here would cause a compile-time error.
    // printf("Outside Block: Variable b = %d\n", b); 
    
    return 0;
}