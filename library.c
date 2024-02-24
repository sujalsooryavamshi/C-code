#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

// Constants
#define MAX_BOOKS 100
#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 50
#define MAX_NAME_LENGTH 50
#define MAX_SLOTS 10

// Structure for Book
struct Book {
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    int available; // 1 if available, 0 if checked out
    time_t dueDate; // Due date for book return
    char borrower[MAX_NAME_LENGTH]; // Borrower's name
    int slotNumber; // Slot number for borrowing
};

// Structure for User
struct User {
    char username[MAX_NAME_LENGTH];
    char password[MAX_NAME_LENGTH];
};

// Global variables
struct Book books[MAX_BOOKS];
struct User users[MAX_SLOTS];
int numBooks = 0;
int numUsers = 0;
int numSlots = 0;
int slots[MAX_SLOTS];

// Function Declarations
void addBook(struct Book books[], int *numBooks);
void displayBooks(struct Book books[], int numBooks);
void searchBook(struct Book books[], int numBooks, char searchTitle[]);
int login(struct User users[], int numUsers, char username[], char password[]);
void borrowBook(struct Book books[], int numBooks, char borrowerName[], int *numSlots, int slots[]);
void returnBook(struct Book books[], int numBooks, char borrowerName[]);
void displaySlots(struct Book books[], int slots[], int numSlots);

// Main Function
int main() {
    int choice;
    int loggedInUserIndex = -1; // To store the index of the logged-in user

    // Display Login
    printf("Library Management System - Login\n");
    char username[MAX_NAME_LENGTH];
    char password[MAX_NAME_LENGTH];

    // Hardcoded user for simplicity (replace with a real user management system)
    strcpy(users[numUsers].username, "admin");
    strcpy(users[numUsers].password, "password");
    numUsers++;

    // Ask for login credentials until successful login
    do {
        printf("Enter username: ");
        scanf("%s", username);
        printf("Enter password: ");
        scanf("%s", password);
        loggedInUserIndex = login(users, numUsers, username, password);
        if (loggedInUserIndex == -1) {
            printf("Login failed. Invalid username or password. Please try again.\n");
        }
    } while (loggedInUserIndex == -1);

    printf("Login successful. Welcome, %s!\n", username);

    do {
        // Display Menu
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Borrow Book\n");
        printf("5. Return Book\n");
        printf("6. Display Borrowed Books\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook(books, &numBooks);
                break;
            case 2:
                displayBooks(books, numBooks);
                break;
            case 3: {
                char searchTitle[MAX_TITLE_LENGTH];
                printf("Enter the title to search: ");
                scanf("%s", searchTitle);
                searchBook(books, numBooks, searchTitle);
                break;
            }
            case 4: {
                char borrowerName[MAX_NAME_LENGTH];
                printf("Enter your name: ");
                scanf("%s", borrowerName);
                borrowBook(books, numBooks, borrowerName, &numSlots, slots);
                break;
            }
            case 5: {
                char borrowerName[MAX_NAME_LENGTH];
                printf("Enter your name: ");
                scanf("%s", borrowerName);
                returnBook(books, numBooks, borrowerName);
                break;
            }
            case 6:
                displaySlots(books, slots, numSlots);
                break;
            case 7:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 7);

    return 0;
}

// Function Definitions

void addBook(struct Book books[], int *numBooks) {
    if (*numBooks < MAX_BOOKS) {
        printf("Enter the title of the book: ");
        scanf("%s", books[*numBooks].title);

        printf("Enter the author of the book: ");
        scanf("%s", books[*numBooks].author);

        books[*numBooks].available = 1; // Book is initially available
        books[*numBooks].dueDate = 0; // Due date is initially set to 0 (not borrowed)
        books[*numBooks].borrower[0] = '\0'; // Set borrower name to an empty string
        books[*numBooks].slotNumber = -1; // Slot number is initially set to -1 (not assigned)

        (*numBooks)++;
        printf("Book added successfully!\n");
    } else {
        printf("Maximum number of books reached. Cannot add more books.\n");
    }
}

void displayBooks(struct Book books[], int numBooks) {
    if (numBooks == 0) {
        printf("No books available.\n");
    } else {
        printf("List of Books:\n");
        for (int i = 0; i < numBooks; ++i) {
            printf("Title: %s, Author: %s, Available: %s\n",
                   books[i].title, books[i].author, books[i].available ? "Yes" : "No");
        }
    }
}

void searchBook(struct Book books[], int numBooks, char searchTitle[]) {
    int found = 0;
    for (int i = 0; i < numBooks; ++i) {
        if (strcmp(books[i].title, searchTitle) == 0) {
            printf("Book found!\n");
            printf("Title: %s, Author: %s, Available: %s\n",
                   books[i].title, books[i].author, books[i].available ? "Yes" : "No");
            if (!books[i].available) {
                printf("Borrowed by: %s, Due Date: %s", books[i].borrower, ctime(&books[i].dueDate));
            }
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }
}

int login(struct User users[], int numUsers, char username[], char password[]) {
    // Check if the entered username and password match any user in the array
    for (int i = 0; i < numUsers; ++i) {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
            return i; // Return the user index
        }
    }
    return -1; // Return -1 for failed login
}

void borrowBook(struct Book books[], int numBooks, char borrowerName[], int *numSlots, int slots[]) {
    char searchTitle[MAX_TITLE_LENGTH];
    printf("Enter the title of the book you want to borrow: ");
    scanf("%s", searchTitle);

    int found = 0;
    for (int i = 0; i < numBooks; ++i) {
        if (strcmp(books[i].title, searchTitle) == 0 && books[i].available) {
            // Book is available, allocate a slot number
            if (*numSlots < MAX_SLOTS) {
                books[i].available = 0; // Book is now checked out
                books[i].dueDate = time(NULL) + 7 * 24 * 60 * 60; // Set due date to 7 days from now
                strcpy(books[i].borrower, borrowerName);
                books[i].slotNumber = *numSlots + 1; // Assign slot number starting from 1
                slots[*numSlots] = i; // Store book index in the slot array
                (*numSlots)++;
                printf("Book borrowed successfully, you can collect by comming to library! Slot Number: %d\n", books[i].slotNumber);
                found = 1;
            } else {
                printf("Maximum number of borrowers reached. Cannot borrow more books.\n");
            }
            break;
        }
    }

    if (!found) {
        printf("Book not available for borrowing or not found.\n");
    }
}

void returnBook(struct Book books[], int numBooks, char borrowerName[]) {
    int slotNumber;
    printf("Enter the slot number of the book you want to return: ");
    scanf("%d", &slotNumber);

    if (slotNumber > 0 && slotNumber <= MAX_SLOTS) {
        int bookIndex = slots[slotNumber - 1];
        if (bookIndex != -1 && !books[bookIndex].available && strcmp(books[bookIndex].borrower, borrowerName) == 0) {
            books[bookIndex].available = 1; // Book is now available
            books[bookIndex].dueDate = 0; // Reset due date
            books[bookIndex].borrower[0] = '\0'; // Reset borrower name
            books[bookIndex].slotNumber = -1; // Reset slot number
            printf("Book returned successfully!\n");
        } else {
            printf("Invalid slot number or book not borrowed by you.\n");
        }
    } else {
        printf("Invalid slot number.\n");
    }
}

void displaySlots(struct Book books[], int slots[], int numSlots) {
    if (numSlots == 0) {
        printf("No books currently borrowed.\n");
    } else {
        printf("List of Borrowed Books:\n");
        for (int i = 0; i < numSlots; ++i) {
            int bookIndex = slots[i];
            printf("Slot Number: %d, Title: %s, Author: %s\n",
                   i + 1, books[bookIndex].title, books[bookIndex].author);
        }
    }
}