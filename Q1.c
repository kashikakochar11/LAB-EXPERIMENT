/*WAP to read a list of integers and 
store it in a single dimensional array. 
Write a C program to print the second largest integer in a list of integers*/
#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[100], n, i;
    int largest = 1;
    int secondlargest = 1;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("Invalid number of elements. Exiting.\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("the elements of array are:");
    for(i=0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    //TO find the second largest element 

    for(i = 0; i < n; i++)
    {
        if (arr[i] > largest) {
            secondlargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondlargest && arr[i] != largest) {
            secondlargest = arr[i];
        }
    }

    if (secondlargest == 1) {
        printf("Cannot determine a second largest number (perhaps there are fewer than two unique elements).\n");
    } else {
        printf("Second largest number = %d\n", secondlargest);
    }

    return 0;
}