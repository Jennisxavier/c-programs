#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create Structure of Library
struct library {
    char book_name[20];
    char author[20];
    int pages;
    float price;
};

// Function to search for a book by its name
int searchBookByName(struct library lib[], int count, char bookName[]) {
    for (int i = 0; i < count; i++) {
        if (strcmp(bookName, lib[i].book_name) == 0) {
            return i; // Return the index of the book if found
        }
    }
    return -1; // Return -1 if the book is not found
}

// Function to update book information
void updateBook(struct library lib[], int index) {
    printf("Enter updated book name = ");
    scanf("%s", lib[index].book_name);

    printf("Enter updated author name = ");
    scanf("%s", lib[index].author);

    printf("Enter updated pages = ");
    scanf("%d", &lib[index].pages);

    printf("Enter updated price = ");
    scanf("%f", &lib[index].price);

    printf("Book information updated successfully.\n");
}

// Driver Code
int main() {
    // Create an array of structs
    struct library lib[100];

    char ar_nm[30], bk_nm[30];

    // Keep track of the number of books available in the library
    int i, input, count;

    i = input = count = 0;

    // Iterate the loop
    while (input != 6) {

        printf("\n\n********######"
               "WELCOME TO E-LIBRARY "
               "#####********\n");
        printf("\n\n1. Add book infor"
               "mation\n2. Display "
               "book information\n");
        printf("3. List all books of "
               "given author\n");
        printf(
            "4. List the count of book"
            "s in the library\n");
        printf("5. Update book information\n");
        printf("6. Exit");

        // Enter the book details
        printf("\n\nEnter one of "
               "the above: ");
        scanf("%d", &input);

        // Process the input
        switch (input) {

        // Add book
        case 1:

            printf("Enter book name = ");
            scanf("%s", lib[i].book_name);

            printf("Enter author name = ");
            scanf("%s", lib[i].author);

            printf("Enter pages = ");
            scanf("%d", &lib[i].pages);

            printf("Enter price = ");
            scanf("%f", &lib[i].price);
            count++;

            break;

        // Print book information
        case 2:
            printf("You have entered"
                   " the following "
                   "information\n");
            for (i = 0; i < count; i++) {

                printf("book name = %s",
                       lib[i].book_name);

                printf("\t author name = %s",
                       lib[i].author);

                printf("\t  pages = %d",
                       lib[i].pages);

                printf("\t  price = %f",
                       lib[i].price);
            }
            break;

        // Take the author name as input
        case 3:
            printf("Enter author name : ");
            scanf("%s", ar_nm);
            for (i = 0; i < count; i++) {

                if (strcmp(ar_nm,
                           lib[i].author)
                    == 0)
                    printf("%s %s %d %f",
                           lib[i].book_name,
                           lib[i].author,
                           lib[i].pages,
                           lib[i].price);
            }
            break;

        // Print total count
        case 4:
            printf("\n No of books in "
                   "brary : %d",
                   count);
            break;

        // Update book information
        case 5:
            printf("Enter the name of the book to update: ");
            scanf("%s", bk_nm);
            i = searchBookByName(lib, count, bk_nm);
            if (i != -1) {
                updateBook(lib, i);
            } else {
                printf("Book not found\n");
            }
            break;

        case 6:
            exit(0);
        }
    }
    return 0;
}

