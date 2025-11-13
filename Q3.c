/*Create a Book structure containing book_id, title, author name and price.
Write a C program to pass a structure as a function argument and print the
book details*/
#include <stdio.h>
#include <string.h>

struct s_book
{
    char ID[50]; // BOOK ID 
    char N[50];  // AUTHOR NAME 
    char T[50];  // TITLE 
};

int main()
{
    struct s_book S1;
    printf("Enter BOOK ID: ");
    scanf("%s", S1.ID); 
    
    printf("Enter author name: ");
    scanf("%s", S1.N);
    
    printf("Enter BOOK TITLE: ");
    scanf("%s", S1.T);
    
    printf("\n--- Book Details ---\n");
    printf("THE BOOK ID is %s and AUTHOR NAME is %s and BOOK TITLE: %s\n", S1.ID, S1.N, S1.T);
    
    return 0;
}
