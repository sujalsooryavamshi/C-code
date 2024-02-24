#include <stdio.h>

void checkRepeatedDigit(int num);

int main() {
    int num;
    printf("Enter a number to check for repeated digits: ");
    scanf("%d", &num);

    checkRepeatedDigit(num);

    return 0;
}

void checkRepeatedDigit(int num) {
    int occurrences[10] = {0}; // Initialize array to store occurrences of each digit

    while (num > 0) {
        int digit = num % 10;
        occurrences[digit]++;
        num /= 10;
    }

    printf("Repeated digits:\n");
    for (int i = 0; i < 10; ++i) {
        if (occurrences[i] >1) {
            printf("Digit %d occurred %d times\n", i, occurrences[i]);
        }
    }
}
