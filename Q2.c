/*2. WAP a C program to Convert temperature from Celsius to Fahrenheit using the
formula: F = (C * 9/5) + 32*/
#include <stdio.h>
int main() 
{
float celsius, fahrenheit;
// Input temperature in Celsius
printf("Enter temperature in Celsius: ");
scanf("%f", &celsius);
// Convert Celsius to Fahrenheit
fahrenheit = (celsius * 9 / 5) + 32;
printf("%.4f Celsius is equal to %.4f Fahrenheit\n", celsius, fahrenheit);
return 0;
}
