// Create a function to count the occurrences of each consonant in the sentence and display the counts.


#include <stdio.h>

void countConsonants(char str[])
{
    int i, count;
    char ch;

    for(ch = 'b'; ch <= 'z'; ch++)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            continue;

        count = 0;

        for(i = 0; str[i] != '\0'; i++)
        {
            if(str[i] == ch)
            {
                count++;
            }
        }

        if(count > 0)
        {
            printf("%c = %d\n", ch, count);
        }
    }
}

int main()
{
    char str[100];

    printf("Enter a sentence: ");
    gets(str);

    countConsonants(str);

    return 0;
}