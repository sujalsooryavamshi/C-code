#include <stdio.h>

int sumrec(int num);

int main() {
    int num, sum;
    printf("Enter the number\n");
    scanf("%d", &num);
    sum = sumrec(num);
    printf("The sum is %d", sum);
    return 0;
}

int sumrec(int num) {
    if (num == 0) {
        return 0;
    } else {
        return (num % 10) + sumrec(num / 10);
    }
}
