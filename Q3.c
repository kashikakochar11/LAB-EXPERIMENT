//Write a program that prompts the user to enter their name and age.
#include <stdio.h>
int main() {
    char name[50];
    int age;
    // Prompt user for name
    printf("Enter your name: ");
    scanf("%s", name);
    // Prompt user for age
    printf("Enter your age: ");
    scanf("%d", &age);
    // Display the entered name and age
    printf("Hello, %s You are %d years old.\n", name, age);

    return 0;
}
