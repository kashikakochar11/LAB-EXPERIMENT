#include <stdio.h>
#include <string.h>
union Address
{
    char name[100];
    char HOME[100];
    char HA[100];//hostel adress
    char C[100];//city
    char S[50];//state
    char z[50];//pin code
};

int main()
{
    union Address A1;
    strcpy(A1.name, "Kashika Kochar");
    printf("hello %s",A1.name);
    strcpy(A1.HOME, "Gurgarm");
    printf("living in %s",A1.HOME);
    printf("\tHOSTEL ADRESS IS:");
    strcpy(A1.HA, "F BLOCK bidholi");
    printf("\n%s",A1.HA);
    strcpy(A1.C, "Dehradun");
    printf("\nCITY: %s",A1.C);
    strcpy(A1.S, "Uttrakhan");
    printf("\nSTATE: %s",A1.S);
    strcpy(A1.S, "122018");
    printf("\nPIN CODE: %s",A1.S);
    
    return 0;
}