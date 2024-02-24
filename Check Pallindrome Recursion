#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to check if a string is a palindrome
bool isPalindrome(const char str[], int start, int end) {
    // Base case: If the start and end indices meet in the middle or cross over, it's a palindrome.
    if (start >= end) {
        return true;
    }
    
    // Check if characters at start and end positions are the same.
    if (str[start] != str[end]) {
        return false; // If they are different, it's not a palindrome.
    }
    
    // Recursive case: Check the next characters.
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
     char str[50];
     printf("Enter the string\n");
     scanf("%s",str);
    if (isPalindrome(str, 0, strlen(str) - 1)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
    
    return 0;
}
