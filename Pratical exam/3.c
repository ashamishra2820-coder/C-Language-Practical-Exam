//  qestion 5 : Create a C program that defines a function to check if a given number is divisible by 3 and 5 both or not.

#include <stdio.h>

void divisible(int num)
{
    if(num % 3 == 0 && num % 5 == 0)
        printf("%d is divisible by both 3 and 5.\n", num);
    else
        printf("%d is not divisible by both 3 and 5.\n", num);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    divisible(num);

    return 0;
}