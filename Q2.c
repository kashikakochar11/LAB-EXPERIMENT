/*Declare a local variable inside a function and try to access it outside the
function. Compare this with accessing the global variable from within the
function */
#include <stdio.h>

int main() { 
    int a = 5; // Declare a variable 'a' in the main function's scope

    { // Start of an inner 
        // Inner block scope
        int b = 10; // Declare 'b' within inner block.
        
        printf("Inside: a = %d, b = %d\n", a, b); 
    } // End of the inner block scope. 

    printf("Outside: a = %d\n", a);// 'a' is still accessible here.
    //printf("Outside: b = %d\n", b); // 'b' is NOT accessible here (if you tried to print 'b', it would cause a compilation error).
   
    return 0; // Indicate that the program executed successfully
}