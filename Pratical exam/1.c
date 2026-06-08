// question 1 :Write a C program that prompts the user to enter a 3 digit's positive integer. Find the sum of first and last digit

#include <stdio.h>
int main()
{
    int num, first, last, sum;

    printf("Enter a 3-digit positive integer: ");
    scanf("%d", &num);

    last = num % 10;
    first = num / 100;

    sum = first + last;

    printf("First Digit = %d\n", first);
    printf("Last Digit = %d\n", last);
    printf("Sum = %d\n", sum);

    return 0;
}