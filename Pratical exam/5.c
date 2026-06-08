// qestion 5 : Write a program to print inverted left half angle Pattern:
// 1 0 1 0 1
//    1 0 1 0
//       1 0 1                          /*Inverted Left Half Angle Pattern*/
//          1 0
//             1


#include <stdio.h>

int main()
{
    int i, j;

    for(i = 10; i >= 6; i--)
    {
        for(j = 10; j > i; j--)
        {
            printf("  ");
        }

        for(j = i; j >= 6; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}