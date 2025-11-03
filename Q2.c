/*WAP to compute the BMI Index of the person and print the BMI values as per
the following ranges. You can use the following formula to compute BMI=
weight(kgs)/Height(Mts)*Height(MtS) */

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for EXIT_FAILURE/EXIT_SUCCESS or use return 1/0

int main() {
    float weight_kg;
    float height_m;
    
    // 1. Corrected scanf format string and arguments
    printf("Enter the height (in m) and weight (in kg)");
    scanf("%f,%f", &height_m, &weight_kg) ;
    // Checking for positive values
    if (height_m <= 0 || weight_kg <= 0) {
        printf("Weight and Height must be positive values.\n");
        return 0;
    }

    // BMI Calculation
    float bmi = weight_kg / (height_m * height_m);
    printf("Calculated BMI: %.2f\n", bmi); // Added newline and formatted to two decimal places

    // Categories of BMI
    if (bmi < 15.0) {
        printf("Starvation\n");
    } else if (bmi <= 17.5) { // No 
        printf("Anorexic\n");
    } else if (bmi <= 18.5) { // No need to check bmi >= 17.6
        printf("Underweight\n");
    } else if (bmi <= 24.9) { // No need to check bmi >= 18.6
        printf("Ideal\n");
    } else if (bmi <= 29.9) { 
        printf("Overweight\n");
    } else if (bmi <= 39.9) {
        printf("Obese\n");
    } else {
        printf("Morbidity Obese\n");
    }
    
    return 0;
}